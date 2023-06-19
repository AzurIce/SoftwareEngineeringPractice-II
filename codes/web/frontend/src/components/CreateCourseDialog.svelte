<script lang="ts">
	import Button, { Label } from '@smui/button';
	import FormField from '@smui/form-field';
	import Switch from '@smui/switch';
	import Textfield from '@smui/textfield';
	import Dialog, { Header, Title, Content } from '@smui/dialog';
	import { createEventDispatcher } from 'svelte';
	import { createCourse } from '$lib/api/course';
	const dispatch = createEventDispatcher();

	export let open: boolean;

	let name = '';
	let description = '';
	let isPrivate = true;

	function onCreateCourse() {
        if (name.length == 0) {
            dispatch('failed', "名称不能为空")
            return;
        }
        if (description.length == 0) {
            dispatch('failed', "介绍不能为空")
            return;
        }
        console.log("[CreateCourseDialog.svelte/onCreateCourse]: Creating...")
		createCourse(name, description, isPrivate)
			.then((res) => {
				console.log('[CreateCourse]: success: ', res);
                dispatch('success', '课程创建成功')
                open = false;
			})
			.catch((err) => {
				console.log('[CreateCourse]: error: ', err);
                dispatch('failed', '课程创建' + err)
			});
	}
</script>

<Dialog
	bind:open
	fullscreen
	aria-labelledby="fullscreen-title"
	aria-describedby="fullscreen-content"
>
	<Header>
		<Title id="fullscreen-title">Create a Course</Title>
	</Header>
	<Content id="fullscreen-content" class="flex flex-col gap-2">
		<Textfield variant="outlined" bind:value={name} label="名称" style="margin-top:10px;" />

		<Textfield
			style="width: 100%;"
			helperLine$style="width: 100%;"
			textarea
			bind:value={description}
			label="描述"
		/>

		<FormField>
			<Switch bind:checked={isPrivate} />
			<span slot="label"> 是否为私有课程（需创建者邀请才可以加入） </span>
		</FormField>
		<div class="flex gap-2">
			<div class="flex-1" />
			<Button
				on:click={() => { open = false; }}
			>
				<Label>取消</Label>
			</Button>
			<Button on:click={onCreateCourse}>
				<Label>创建</Label>
			</Button>
		</div>
	</Content>
</Dialog>
