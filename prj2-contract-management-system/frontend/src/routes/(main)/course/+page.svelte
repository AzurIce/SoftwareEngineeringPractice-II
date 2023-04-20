<script lang="ts">
	import Button from '@smui/button';
	import CourseList from '../../../components/CourseList.svelte';
	// import LoremIpsum from '$lib/LoremIpsum.svelte';
	import Paper, { Title, Content, Subtitle } from '@smui/paper';

	import CreateCourseDialog from '../../../components/CreateCourseDialog.svelte';

	let open = false;
</script>

<CreateCourseDialog bind:open />

<Paper>
	<Title>Courses</Title>
	<Subtitle>This is a sheet of paper.</Subtitle>
	<Content>
		<span>TODO: Search Paper is used to build an elevated surface.</span>
		<Button
			on:click={() => {
				open = true;
			}}>Create Course</Button
		>
	</Content>
</Paper>
<CourseList />
