<script lang="ts">
	import { goto } from '$app/navigation';

	function exit() {
		localStorage.removeItem('prj2-jwt');
		goto('/login');
	}

	let count = 0;
	function handleClick() {
		count += 1;
	}

	import CourseList from '../../components/CourseList.svelte';

	import { onMount } from 'svelte';
	import { courseList, createdCourseList, joinedCourseList } from '$lib/store';
	import EditCourseDialog from '../../components/EditCourseDialog.svelte';
	import type { Course } from '$lib/models';
	import SnackbarList from '../../components/SnackbarList.svelte';
	import { updateCourseList } from '$lib/store';
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

<!-- <h1>Welcome</h1>
<p>
	Visit <a href="https://kit.svelte.dev">kit.svelte.dev</a> to read the documentation
</p>

<div class="flex flex-col">
	<div class="rounded bg-blue border-dashed text-blue-9">Hello UnoCSS!</div>
	<div class="i-ri:bard-line" />
</div>

<button on:click={handleClick}>
	Clicked {count}
	{count === 1 ? 'time' : 'times'}
</button>

<button on:click={exit}> 退出 </button> -->


<div class="flex justify-around gap-2">
	<div class="bg-white flex-1 flex flex-col items-center rounded shadow-sm p-2">
		<span class="p-2">加入的课程</span>
		<hr class="w-full" />
		<CourseList courses={$joinedCourseList} on:edit={onEditCourse} />
	</div>
	<div class="bg-white flex-1 flex flex-col items-center rounded shadow-sm p-2">
		<span class="p-2">创建的课程</span>
		<hr class="w-full" />
		<CourseList courses={$createdCourseList} on:edit={onEditCourse} />
	</div>
</div>

<SnackbarList bind:messages/>