<script lang="ts">
    // Snackbar
	import SnackbarList from '../../components/SnackbarList.svelte';

	let messages: { type: string; msg: string }[] = [];

	function createSnackBar(type: string, msg: string) {
		messages.push({
			type,
			msg,
		});
		messages = messages;
	}

    // ------
	import { goto } from '$app/navigation';

	import Textfield from '@smui/textfield';
	import { tweened } from 'svelte/motion';
	import { cubicOut } from 'svelte/easing';

	let loginBtnWidth = tweened(60, {
		duration: 400,
		easing: cubicOut
	});
	let loginTab = true;
	$: $loginBtnWidth = loginTab ? 60 : 40;

	let username = '';
	let password = '';
	let confirmPassword = '';

	import { login, register } from '../../lib/api/user';
	import Button, { Group } from '@smui/button';
	// import { user } from '../../lib/store';

	function onLoggedIn(data: any) {
		console.log('[onLoggedIn]: ', data);
		// user.set(data.user);
		localStorage.setItem('prj2-jwt', data.token);
		localStorage.setItem('prj2-id', data.user.id);
		goto('/');
	}
	function onLogin() {
		if (username == '') {
			createSnackBar('failed', '用户名不能为空');
			return;
		}
		login(username, password)
			.then((res) => {
				console.log('[login/then]: ' + res);
				res = res.data;
				onLoggedIn(res.data);
			})
			.catch((err) => {
				console.log('[login/catch]: ' + err);
				createSnackBar('failed', '登陆失败 ' + err);
			});
		console.log(username, password);
	}

	function onRegister() {
		if (username == '') {
			createSnackBar('failed', '用户名不能为空');
			return;
		}
		if (password != confirmPassword) {
			createSnackBar('failed', '密码不一致');
			return;
		}
		register(username, password)
			.then((res) => {
				console.log('[register/then]: ' + res);
				createSnackBar('success', '注册成功');
			})
			.catch((err) => {
				console.log('[register/catch]: ' + err);
				createSnackBar('failed', '注册失败');
				if (err.code && err.message) {
					// errMessage = err.code + ': ' + err.message;
				} else {
					err = err.response.data;
					// errMessage = err.error;
				}
			});
		// console.log(username, password);
	}
</script>

<SnackbarList bind:messages={messages}/>

<div
	class="
  w-screen
  h-screen
  flex flex-col
  justify-center
  items-center
  bg-white
  bg-opacity-20
"
>
	<div
		class="flex flex-col gap-3 p-8 items-center
    w-auto
    sm:w-400px
    h-fit
    top-1/2
    rounded-xl
    bg-white bg-opacity-90
    z-3
    shadow-xl
  "
	>
		<!-- 登录 -->
		<span class="mb-3 text-2xl">
			{#if loginTab}登录{:else}注册账号{/if}
		</span>
		<div class="w-full flex flex-col items-strech gap-4">
			<Textfield variant="outlined" bind:value={username} label="用户名" />
			<Textfield variant="outlined" bind:value={password} label="密码" type="password"/>
			{#if !loginTab}
				<Textfield variant="outlined" bind:value={confirmPassword} label="确认密码" type="password"/>
			{/if}
		</div>
		<Group style="width: 100%; display: flex; justify-content: stretch;">
			<Button
				variant="raised"
				style="width: {$loginBtnWidth}%;"
				ripple={loginTab}
				on:click={() => {
					if (loginTab) {
						onLogin();
					} else {
						loginTab = true;
					}
				}}
			>
				{#if !loginTab}
					<div class="i-ri:arrow-left-line" />
					已有账号？
				{:else}
					登录
				{/if}
			</Button>
			<Button
				variant="outlined"
				style="width: {100 - $loginBtnWidth}%;"
				ripple={!loginTab}
				on:click={() => {
					if (!loginTab) {
						onRegister();
					} else {
						loginTab = false;
					}
				}}
			>
				{#if !loginTab}
					注册
				{:else}
					没有账号？
					<div class="i-ri:arrow-right-line" />
				{/if}
			</Button>
		</Group>
	</div>
</div>

<style>
	* :global(.rounded-full) {
		border-radius: 100%;
	}
</style>
