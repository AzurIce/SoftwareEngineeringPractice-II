<script lang="ts">
	import MenuSurface from '@smui/menu-surface';
	import Button from '@smui/button';

	let surface: MenuSurface;
	let openSurface = false;
	import { page } from '$app/stores';
	import { afterNavigate, goto } from '$app/navigation';

	let theme = 'light';

	$: activeUrl = $page.url.pathname;

	afterNavigate((nav) => {
		// If not logged in, goto login page
		if (import.meta.env.DEV) return;
		console.log(nav);
		console.log(localStorage.getItem('prj2-jwt'));
		if (localStorage.getItem('prj2-jwt') == null) {
			if (nav.to?.route.id != '/login' && nav.to?.route.id != '/register') goto('/login');
		}
	});
</script>

{#if theme == 'light'}
	<link rel="stylesheet" href="/smui.css" />
{:else if theme == 'dark'}
	<link rel="stylesheet" href="/smui-dark.css" />
{:else}
	<link rel="stylesheet" href="/smui.css" media="(prefers-color-scheme: light)" />
	<link rel="stylesheet" href="/smui-dark.css" media="screen and (prefers-color-scheme: dark)" />
{/if}

<div class="absolute inset-0 font-sans bg-[url(/img/bg.jpg)] bg-no-repeat bg-cover">
	<div class="flex flex-col min-h-full items-strech">
		<nav class="sticky top-0 h-2rem bg-white shadow flex items-center p-3 gap-4">
			<Button
				on:click={() => goto('/home')}
				ripple={false}
				color={activeUrl == '/home' ? 'primary' : 'secondary'}>Home</Button
			>
			<Button
				on:click={() => goto('/course')}
				ripple={false}
				color={activeUrl == '/course' ? 'primary' : 'secondary'}>Course</Button
			>
			<!-- <a href="/" class={activeUrl == '/' ? '' : 'text-black'}>Home</a>
			<a href="/course" class={activeUrl == '/course' ? '' : 'text-black'}>Course</a> -->
			<div class="flex-1" />
			<!-- {openSurface} -->
			<div class="flex items-center md:order-2">
				<!-- Dropdown menu -->
				<button
					class="inline-flex items-center bg-white border-none rounded hover:bg-orange hover:bg-opacity-30 h-8 w-8 hover:bg-gray"
					on:click={() => {
						surface.setOpen(!openSurface);
						openSurface = !openSurface;
					}}
				>
					<svg
						class="h-8 w-8"
						xmlns="http://www.w3.org/2000/svg"
						width="32"
						height="32"
						viewBox="0 0 24 24"
						><path fill="currentColor" d="M3 4h18v2H3V4Zm0 7h18v2H3v-2Zm0 7h18v2H3v-2Z" /></svg
					>
				</button>
				<MenuSurface
					bind:this={surface}
					anchorCorner="BOTTOM_LEFT"
					on:SMUIMenuSurface:closed={() => {
						openSurface = false;
					}}
				>
					<div class="m-1 flex flex-col items-strech min-w-max">
						<Button on:click={() => surface.setOpen(false)}>Submit</Button>
						<Button
							on:click={() => {
								localStorage.removeItem('prj2-jwt');
								goto('/login');
							}}
						>
							<span class="i-ri:logout-box-line m-r-2" />退出登录
						</Button>
					</div>
				</MenuSurface>
			</div>
		</nav>
		<!-- <div class="bg-blue h-800">

		</div> -->
		<div class="flex-1 m-4 rounded-xl p-4 bg-white bg-opacity-70">
			<slot />
		</div>
	</div>
</div>
