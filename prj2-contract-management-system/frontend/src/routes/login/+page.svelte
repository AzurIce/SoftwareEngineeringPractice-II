<!-- TODO: combine the login and register page -->
<script lang="ts">
	import { goto } from '$app/navigation';

	import Textfield from '@smui/textfield';
	import HelperText from '@smui/textfield/helper-text';
	import { tweened } from 'svelte/motion';
	import { cubicOut } from 'svelte/easing';
	import { fade } from 'svelte/transition';
	import { flip } from 'svelte/animate';

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

	function clickedRegister() {}

	function onLoggedIn(data: any) {
		localStorage.setItem('prj2-jwt', data.token);
		goto('/');
		// this.$store.commit("setToken", data.token);
		// this.$store.commit("setLogin");
		// this.$store.commit("setUser", data.user);
		// localStorage.setItem("ACHToken", data.token);
		// this.$router.push("/");
	}
	function onLogin() {
		if (username == '') {
			// TODO: 用户名不能为空
			return;
		}
		// TODO: 检查密码
		login(username, password)
			.then((res) => {
				console.log(res);
				res = res.data;
				onLoggedIn(res.data);
			})
			.catch((err) => {
				console.log(err);
				err = err.response.data;
				// TODO: toast
				console.log(err.error);
			});
		console.log(username, password);
	}

	function onRegistered() {
		// errMessage = '';
		// okMessage = '注册成功';
		// goto('/login')
		// this.$store.commit("setToken", data.token);
		// this.$store.commit("setLogin");
		// this.$store.commit("setUser", data.user);
		// localStorage.setItem("ACHToken", data.token);
		// this.$router.push("/");
	}
	function onRegister() {
		if (username == '') {
			// errMessage = '用户名不能为空';
			return;
		}
		if (password != confirmPassword) {
			// errMessage = '密码不一致';
			return;
		}
		register(username, password)
			.then((res) => {
				console.log(res);
				onRegistered();
			})
			.catch((err) => {
				console.log(err);
				if (err.code && err.message) {
					// errMessage = err.code + ': ' + err.message;
				} else {
					err = err.response.data;
					// errMessage = err.error;
				}
			});
		console.log(username, password);
	}
</script>

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
			<Textfield variant="outlined" bind:value={password} label="密码" />
			{#if !loginTab}
				<Textfield variant="outlined" bind:value={confirmPassword} label="确认密码" />
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
		<!-- <button
      type="button"
      class="w-full text-white bg-gray-700 border-0
      hover:cursor-pointer hover:bg-gray-800
      focus:ring-4 focus:ring-blue-300 font-medium rounded-lg text-sm px-5 py-2.5
      dark:bg-blue-600 dark:hover:bg-gray-700 focus:outline-none dark:focus:ring-blue-800"
      on:click={onLogin}
    >
      注册
    </button> -->
	</div>
</div>

<style>
	* :global(.rounded-full) {
		border-radius: 100%;
	}
</style>
