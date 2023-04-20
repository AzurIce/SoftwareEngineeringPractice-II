<script lang="ts">
	import { createEventDispatcher } from 'svelte';

	const dispatch = createEventDispatcher();

	export let type = 'success';
	export let msg = 'test';
	// export let show = true;
</script>

<div class="bg-slate-700 rounded shadow-md min-w-20rem h-2rem text-white flex items-center p-2">
	<div class={type == 'success' ? 'i-ri:check-fill bg-green' : 'i-ri:close-fill bg-red'} />
	<div class="m-2">{msg}</div>
	<div class="flex-1" />
	<button
		class="inline-flex items-center bg-slate-700 border-none rounded hover:bg-opacity-30 h-8 w-8 hover:bg-gray hover:cursor-pointer"
		on:click={() => {
			dispatch('dismiss');
		}}
	>
		<div class="i-ri:close-fill bg-white w-full h-full" />
	</button>
</div>
