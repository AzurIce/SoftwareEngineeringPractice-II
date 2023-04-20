<script lang="ts">
	import { afterNavigate, goto } from '$app/navigation';

	let theme = 'light';

	afterNavigate((nav) => {
		console.log(nav);
		if (import.meta.env.DEV) return;

		// If not logged in, goto login page
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
		<slot />
	</div>
</div>
