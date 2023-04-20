<script>
	import { goto } from '$app/navigation';

	function exit() {
		localStorage.removeItem('prj2-jwt');
		goto('/login');
	}

	let count = 0;

	function handleClick() {
		count += 1;
	}

	import { user } from '../../lib/store';
	console.log($user);

	import { onMount } from 'svelte';
    import { courseList, createdCourseList, joinedCourseList } from '$lib/store';
	import { getCourses, getCreatedCourses, getJoinedCourses } from '$lib/api/course';
	import CourseList from '../../components/CourseList.svelte';
	onMount(() => {
        console.log('[onMount]: Updating courseList');
		updateCourseList();
	});

	function updateCourseList() {
		getCourses()
			.then((res) => {
                res = res.data;
				console.log(res);
                $courseList = res.data;
			})
			.catch((err) => {
				console.log(err);
			});
        getJoinedCourses()
			.then((res) => {
                res = res.data;
				console.log(res);
                $joinedCourseList = res.data;
			})
			.catch((err) => {
				console.log(err);
			});
        getCreatedCourses()
			.then((res) => {
                res = res.data;
				console.log(res);
                $createdCourseList = res.data;
			})
			.catch((err) => {
				console.log(err);
			});
	}

</script>

<h1>Welcome, {$user.username}</h1>
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

<button on:click={exit}> 退出 </button>

<div class="flex justify-around gap-2">
	<div class="bg-white flex-1 flex flex-col items-center rounded shadow-sm p-2">
		<span class="p-2">加入的课程</span>
		<hr class="w-full" />
        <CourseList courseList={$joinedCourseList} />
	</div>
	<div class="bg-white flex-1 flex flex-col items-center rounded shadow-sm p-2">
		<span class="p-2">创建的课程</span>
		<hr class="w-full" />
        <CourseList courseList={$createdCourseList} />
	</div>
</div>
