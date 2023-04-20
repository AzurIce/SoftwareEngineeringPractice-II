<script lang="ts">
	import type { Course } from '../lib/models';
	import DataTable, { Head, Body, Row, Cell } from '@smui/data-table';
    import Button from '@smui/button';
	import { joinedCourseList } from '$lib/store';
	import { exitCourse, joinCourse, updateCourse } from '$lib/api/course';

	export let courses: Course[] = [];

    function cut(str: string): string {
        if (str.length > 20) {
            return str.substr(0, 19) + '...';
        } else {
            return str;
        }
    }

    function onJoinCourse(id: number) {
        joinCourse(id).then((res) => {
            updateCourseList()
            console.log("[CourseList/onJoinCourse]: success ", res)
        }).catch((err) => {
            console.log("[CourseList/onJoinCourse]: failed", err)
        })
    }

    function onExitCourse(id: number) {
        exitCourse(id).then((res) => {
            updateCourseList()
            console.log("[CourseList/onExitCourse]: success ", res)
        }).catch((err) => {
            console.log("[CourseList/onExitCourse]: failed", err)
        })
    }

    function isJoined(id: number) {
        for (let i = 0; i < $joinedCourseList.length; i++) {
            if ($joinedCourseList[i].id == id) return true;
        }
        return false;
    }

	import { createEventDispatcher } from 'svelte';
    const dispatch = createEventDispatcher();
    import { courseList, createdCourseList } from '$lib/store';
	import { getCourses, getCreatedCourses, getJoinedCourses } from '$lib/api/course';
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
</script>

<div>
	<DataTable table$aria-label="User list" style="width: 100%;">
		<Head>
			<Row>
				<Cell numeric>ID</Cell>
				<Cell>CreaterID</Cell>
				<Cell>Name</Cell>
				<Cell style="width: 100%;">Description</Cell>
				<Cell>Actions</Cell>
			</Row>
		</Head>
		<Body>
			{#each courses as course}
				<Row>
					<Cell numeric>{course.id}</Cell>
					<Cell>{course.creater_id}</Cell>
					<Cell>
                        {course.name}
                        {#if course.is_private}
                            <span class="bg-gray-200 rounded-full w-min p-2">Private</span>
                        {/if}
                    </Cell>
					<Cell>
                        {cut(course.description)}
                    </Cell>
					<Cell>
                        {#if !isJoined(course.id)}
                            <Button on:click={() => { onJoinCourse(course.id) }}>Join</Button>
                        {:else}
                            <Button on:click={() => { onExitCourse(course.id) }} style="color: #bbbbbb">Joined</Button>
                        {/if}
                        {#if course.creater_id == (localStorage.getItem('prj2-id') || -1)}
                            <Button on:click={() => { dispatch('edit', course.id) }}>Edit</Button>
                        {/if}
                    </Cell>
				</Row>
			{/each}
		</Body>

		<!--  <LinearProgress
    indeterminate
    bind:closed={loaded}
    aria-label="Data is being loaded..."
    slot="progress"
  /> -->
	</DataTable>
</div>
