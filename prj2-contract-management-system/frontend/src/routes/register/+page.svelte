<script lang="ts">
	import { goto } from '$app/navigation';

	let username = '';
	let password = '';
	let confirmedPassword = '';

	let errMessage = '';
	let okMessage = 'asdjkl';

	import { register } from '../../lib/api/user';

	function onRegistered() {
		errMessage = '';
		okMessage = '注册成功';
		// goto('/login')
		// this.$store.commit("setToken", data.token);
		// this.$store.commit("setLogin");
		// this.$store.commit("setUser", data.user);
		// localStorage.setItem("ACHToken", data.token);
		// this.$router.push("/");
	}
	function onRegister() {
		if (username == '') {
			errMessage = '用户名不能为空';
			return;
		}
		if (password != confirmedPassword) {
			errMessage = '密码不一致';
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
					errMessage = err.code + ': ' + err.message;
				} else {
					err = err.response.data;
					errMessage = err.error;
				}
			});
		console.log(username, password);
	}

	import { fly } from 'svelte/transition';
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
	{#if okMessage.length > 0}
		<div
			transition:fly={{ delay: 0, duration: 100, y: -50 }}
			id="toast-success"
			class="absolute top-8 flex items-center w-full max-w-xs p-4 mb-4 text-gray-500 bg-white rounded-lg shadow dark:text-gray-400 dark:bg-gray-800"
			role="alert"
		>
			<div
				class="inline-flex items-center justify-center flex-shrink-0 w-8 h-8 text-green-500 bg-green-100 rounded-lg dark:bg-green-800 dark:text-green-200"
			>
				<svg
					aria-hidden="true"
					class="w-5 h-5"
					fill="currentColor"
					viewBox="0 0 20 20"
					xmlns="http://www.w3.org/2000/svg"
					><path
						fill-rule="evenodd"
						d="M16.707 5.293a1 1 0 010 1.414l-8 8a1 1 0 01-1.414 0l-4-4a1 1 0 011.414-1.414L8 12.586l7.293-7.293a1 1 0 011.414 0z"
						clip-rule="evenodd"
					/></svg
				>
				<span class="sr-only">Check icon</span>
			</div>
			<div class="ml-3 text-sm font-normal">{okMessage}</div>
			<button
				on:click={() => {
					okMessage = '';
				}}
				type="button"
				class="border-none ml-auto -mx-1.5 -my-1.5 bg-white text-gray-400 hover:text-gray-900 rounded-lg focus:ring-2 focus:ring-gray-300 p-1.5 hover:bg-gray-100 inline-flex h-8 w-8 dark:text-gray-500 dark:hover:text-white dark:bg-gray-800 dark:hover:bg-gray-700"
				data-dismiss-target="#toast-success"
				aria-label="Close"
			>
				<span class="sr-only">Close</span>
				<svg
					aria-hidden="true"
					class="w-5 h-5"
					fill="currentColor"
					viewBox="0 0 20 20"
					xmlns="http://www.w3.org/2000/svg"
					><path
						fill-rule="evenodd"
						d="M4.293 4.293a1 1 0 011.414 0L10 8.586l4.293-4.293a1 1 0 111.414 1.414L11.414 10l4.293 4.293a1 1 0 01-1.414 1.414L10 11.414l-4.293 4.293a1 1 0 01-1.414-1.414L8.586 10 4.293 5.707a1 1 0 010-1.414z"
						clip-rule="evenodd"
					/></svg
				>
			</button>
		</div>
	{/if}
	{#if errMessage.length > 0}
		<div
			transition:fly={{ delay: 0, duration: 100, y: -50 }}
			id="toast-danger"
			class="absolute top-8 flex items-center w-full max-w-xs p-4 mb-4 text-gray-500 bg-white rounded-lg shadow dark:text-gray-400 dark:bg-gray-800"
			role="alert"
		>
			<div
				class="inline-flex items-center justify-center flex-shrink-0 w-8 h-8 text-red-500 bg-red-100 rounded-lg dark:bg-red-800 dark:text-red-200"
			>
				<svg
					aria-hidden="true"
					class="w-5 h-5"
					fill="currentColor"
					viewBox="0 0 20 20"
					xmlns="http://www.w3.org/2000/svg"
					><path
						fill-rule="evenodd"
						d="M4.293 4.293a1 1 0 011.414 0L10 8.586l4.293-4.293a1 1 0 111.414 1.414L11.414 10l4.293 4.293a1 1 0 01-1.414 1.414L10 11.414l-4.293 4.293a1 1 0 01-1.414-1.414L8.586 10 4.293 5.707a1 1 0 010-1.414z"
						clip-rule="evenodd"
					/></svg
				>
				<span class="sr-only">Error icon</span>
			</div>
			<div class="ml-3 text-sm font-normal">{errMessage}</div>
			<button
				on:click={() => {
					errMessage = '';
				}}
				type="button"
				class="border-none ml-auto -mx-1.5 -my-1.5 bg-white text-gray-400 hover:text-gray-900 rounded-lg focus:ring-2 focus:ring-gray-300 p-1.5 hover:bg-gray-100 inline-flex h-8 w-8 dark:text-gray-500 dark:hover:text-white dark:bg-gray-800 dark:hover:bg-gray-700"
				data-dismiss-target="#toast-danger"
				aria-label="Close"
			>
				<span class="sr-only">Close</span>
				<svg
					aria-hidden="true"
					class="w-5 h-5"
					fill="currentColor"
					viewBox="0 0 20 20"
					xmlns="http://www.w3.org/2000/svg"
					><path
						fill-rule="evenodd"
						d="M4.293 4.293a1 1 0 011.414 0L10 8.586l4.293-4.293a1 1 0 111.414 1.414L11.414 10l4.293 4.293a1 1 0 01-1.414 1.414L10 11.414l-4.293 4.293a1 1 0 01-1.414-1.414L8.586 10 4.293 5.707a1 1 0 010-1.414z"
						clip-rule="evenodd"
					/></svg
				>
			</button>
		</div>
	{/if}

	<div
		class="flex flex-col space-y-2 p-8 items-center
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
		<!-- <button on:click={()=>{okMessage = okMessage.length > 0 ? "" : "1"}}>ToggleToast: {okMessage}</button>
    <button on:click={()=>{errMessage = errMessage.length > 0 ? "" : "1"}}>ToggleToast: {errMessage}</button> -->
		<!-- 登录 -->
		<p class="m-0 mb-3 text-2xl mr-1 flex-1">注册账号</p>
		<div class="space-y-2 w-full">
			<div class="flex flex-col items-strech gap-2">
				<!-- 用户名 -->
				<div class="flex flex-col items-strech">
					<label for="username" class="block mb-2 text-sm font-medium text-gray-900 dark:text-white"
						>Username</label
					>
					<input
						type="text"
						id="username"
						bind:value={username}
						class="bg-white border border-gray-300 text-gray-900 text-sm rounded-lg
            focus:ring-blue-500 focus:border-blue-500 block p-2.5 dark:bg-gray-700 dark:border-gray-600 dark:placeholder-gray-400 dark:text-white dark:focus:ring-blue-500 dark:focus:border-blue-500"
						required
					/>
				</div>
				<!-- 密码 -->
				<div class="flex flex-col items-strech">
					<label for="password" class="block mb-2 text-sm font-medium text-gray-900 dark:text-white"
						>Password</label
					>
					<input
						type="password"
						id="password"
						class="bg-white border border-gray-300 text-gray-900 text-sm rounded-lg focus:ring-blue-500 focus:border-blue-500 block p-2.5 dark:bg-gray-700 dark:border-gray-600 dark:placeholder-gray-400 dark:text-white dark:focus:ring-blue-500 dark:focus:border-blue-500"
						bind:value={confirmedPassword}
						required
					/>
				</div>
				<!-- 确认密码 -->
				<div class="mb-6 flex flex-col items-strech">
					<label for="password" class="block mb-2 text-sm font-medium text-gray-900 dark:text-white"
						>ConfirmPassword</label
					>
					<input
						type="password"
						id="password"
						class="bg-white border border-gray-300 text-gray-900 text-sm rounded-lg focus:ring-blue-500 focus:border-blue-500 block p-2.5 dark:bg-gray-700 dark:border-gray-600 dark:placeholder-gray-400 dark:text-white dark:focus:ring-blue-500 dark:focus:border-blue-500"
						bind:value={password}
						required
					/>
				</div>
			</div>
		</div>
		<div class="flex">
			<a href="/login">已有账号？立即登录</a>
		</div>
		<button
			type="button"
			class="w-full text-white bg-blue-700 border-0
      hover:cursor-pointer hover:bg-blue-800
      focus:ring-4 focus:ring-blue-300 font-medium rounded-lg text-sm px-5 py-2.5
      dark:bg-blue-600 dark:hover:bg-blue-700 focus:outline-none dark:focus:ring-blue-800"
			on:click={onRegister}
		>
			注册
		</button>
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
