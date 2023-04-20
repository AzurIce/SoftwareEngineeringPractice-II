<script lang="ts">
	import Button, { Label } from '@smui/button';
	import FormField from '@smui/form-field';
	import Switch from '@smui/switch';
	import Textfield from '@smui/textfield';
	import Dialog, { Header, Title, Content } from '@smui/dialog';
	import { createEventDispatcher } from 'svelte';
	import { getCourses, updateCourse } from '$lib/api/course';
	import type { Course } from '$lib/models';
	import { courseList } from '$lib/store';
	const dispatch = createEventDispatcher();

	export let course: Course;

	function onCreateCourse() {
        if (course.name.length == 0) {
            dispatch('failed', "名称不能为空")
            return;
        }
        if (course.description.length == 0) {
            dispatch('failed', "介绍不能为空")
            return;
        }
        console.log("[CreateCourseDialog.svelte/onCreateCourse]: Creating...")
		updateCourse(course.id, course.name, course.description, course.is_private)
			.then((res) => {
				console.log('[UpdateCourse]: success: ', res);
                dispatch('success', '课程修改成功')
				dispatch('onDismiss')
			})
			.catch((err) => {
				console.log('[UpdateCourse]: error: ', err);
                dispatch('failed', '课程修改失败 ' + err)
			});
	}
</script>

<Dialog
	open={true}
	fullscreen
	aria-labelledby="fullscreen-title"
	aria-describedby="fullscreen-content"
>
	<Header>
		<Title id="fullscreen-title">Edit a Course</Title>
	</Header>
	<Content id="fullscreen-content" class="flex flex-col gap-2">
		<Textfield variant="outlined" bind:value={course.name} label="名称" style="margin-top:10px;" />

		<Textfield
			style="width: 100%;"
			helperLine$style="width: 100%;"
			textarea
			bind:value={course.description}
			label="描述"
		/>

		<FormField>
			<Switch bind:checked={course.is_private} />
			<span slot="label"> 是否为私有课程（需创建者邀请才可以加入） </span>
		</FormField>
		<div class="flex gap-2">
			<div class="flex-1" />
			<Button
				on:click={() => dispatch('onDismiss')}
			>
				<Label>取消</Label>
			</Button>
			<Button on:click={onCreateCourse}>
				<Label>提交</Label>
			</Button>
		</div>
	</Content>
</Dialog>
