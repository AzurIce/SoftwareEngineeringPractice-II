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
</script>


<h1>Welcome to SvelteKit</h1>
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