<script lang="ts">
	import Button from '@smui/button';
	import CourseList from '../../../components/CourseList.svelte';
	import Paper, { Title, Content, Subtitle } from '@smui/paper';
	import SnackbarList from '../../../components/SnackbarList.svelte';
	import CreateCourseDialog from '../../../components/CreateCourseDialog.svelte';

	let open = false;

	import { onMount } from 'svelte';
    import { courseList, createdCourseList, joinedCourseList } from '$lib/store';
	import { getCourses, getCreatedCourses, getJoinedCourses, updateCourse } from '$lib/api/course';
	import EditCourseDialog from '../../../components/EditCourseDialog.svelte';
	import type { Course } from '$lib/models';
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

	function getCourse(id: number): Course {
		for (let i = 0; i < $courseList.length; i++) {
			if ($courseList[i].id == id) {
				return $courseList[i];
			}
		}
		return { id: -1, name: '', description: '', is_private: false } as Course;
	}
	
	let course: Course | undefined;
	function onEditCourse(event: any) {
		console.log('[onEditCourse]: ', event);
		let editId = event.detail as number;
		course = getCourse(editId);
	}

    let messages: { type: string, msg: string }[] = [];
    function joinMessage(type: string, msg: any) {
        messages.push({type, msg: msg as string});
        messages = messages;
    }

</script>

<CreateCourseDialog bind:open on:success={(event) => {
    joinMessage('success',  event.detail);
    updateCourseList();
}} on:failed={(event) => {
    joinMessage('failed',  event.detail);
}}/>

{#if course !== undefined}
	<EditCourseDialog
		bind:course
		on:onDismiss={() => {
			course = undefined;
		}}
		on:success={(event) => {
			joinMessage('success', event.detail);
			updateCourseList();
		}}
		on:failed={(event) => {
			joinMessage('failed', event.detail);
		}}
	/>
{/if}

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
<CourseList courses={$courseList} on:edit={onEditCourse}/>

<SnackbarList bind:messages/>
