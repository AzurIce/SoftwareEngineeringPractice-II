<script lang="ts">
	import Snackbar from './Snackbar.svelte';

	export let messages: { type: string; msg: string }[] = [];
</script>

<div class="absolute top-4 right-4 flex flex-col gap-2">
	{#each messages as message}
		<Snackbar
			type={message.type}
			msg={message.msg}
			on:dismiss={() => {
				messages = messages.filter((el) => el != message);
			}}
		/>
	{/each}
</div>
