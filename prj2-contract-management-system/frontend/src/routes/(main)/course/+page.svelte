<script lang="ts">
	import Button from '@smui/button';
	import CourseList from '../../../components/CourseList.svelte';
	import Paper, { Title, Content, Subtitle } from '@smui/paper';
	import SnackbarList from '../../../components/SnackbarList.svelte';
	import CreateCourseDialog from '../../../components/CreateCourseDialog.svelte';

	let open = false;

	import { onMount } from 'svelte';
    import { courseList, createdCourseList, joinedCourseList } from '$lib/store';
	import { getCourses, getCreatedCourses, getJoinedCourses } from '$lib/api/course';
	onMount(() => {
        console.log('[onMount]: Updating courseList');
		updateCourseList();
	});

	function updateCourseList() {
		getCourses()
			.then((res) => {
                res = res.data;
				console.log("[updateCourseList(/)/getCourses]: success ", res);
                $courseList = res.data || [];
			})
			.catch((err) => {
				console.log("[updateCourseList(/)/getCourses]: failed ", err);
			});
        getJoinedCourses()
			.then((res) => {
                res = res.data;
				console.log("[updateCourseList(/)/getJoinedCourses]: success ", res);
                $joinedCourseList = res.data || [];
			})
			.catch((err) => {
				console.log("[updateCourseList(/)/getJoinedCourses]: failed ", err);
			});
        getCreatedCourses()
			.then((res) => {
                res = res.data;
				console.log("[updateCourseList(/)/getCreatedCourses]: success ", res);
                $createdCourseList = res.data || [];
			})
			.catch((err) => {
				console.log("[updateCourseList(/)/getCreatedCourses]: failed ", err);
			});
	}

    let messages: { type: string, msg: string }[] = [];
    function joinMessage(type: string, msg: any) {
        messages.push({type, msg: msg as string});
        messages = messages;
    }

</script>

<CreateCourseDialog bind:open on:success={(msg) => {
    joinMessage('success', msg)
    updateCourseList();
}} on:failed={(msg) => {
    joinMessage('failed', msg)
}}/>

<Paper>
	<Title>Courses</Title>
	<Subtitle>This is a sheet of paper.</Subtitle>
	<Content>
		<span>TODO: Search Paper is used to build an elevated surface.</span>
		<Button
			on:click={() => {
				open = true;
			}}
		>
			Create Course
		</Button>
	</Content>
</Paper>
<CourseList bind:courses={$courseList}/>

<SnackbarList />
