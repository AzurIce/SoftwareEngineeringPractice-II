<script lang="ts">
	import Button from '@smui/button';
	import CourseList from '../../../components/CourseList.svelte';
	import Paper, { Title, Content, Subtitle } from '@smui/paper';
	import SnackbarList from '../../../components/SnackbarList.svelte';
	import CreateCourseDialog from '../../../components/CreateCourseDialog.svelte';

	let open = false;

	import { onMount } from 'svelte';
    import { courseList, createdCourseList, joinedCourseList, updateCourseList } from '$lib/store';
	import EditCourseDialog from '../../../components/EditCourseDialog.svelte';
	import type { Course } from '$lib/models';
	onMount(() => {
        console.log('[onMount]: Updating courseList');
		updateCourseList();
	});
	
	let course: Course | undefined;
	function onEditCourse(event: any) {
		console.log('[onEditCourse]: ', event);
		let editId = event.detail as number;
		course = $courseList.find((course) => course.id == editId)
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
