<script lang="ts">
	import MenuSurface from '@smui/menu-surface';
	import Button from '@smui/button';

	let surface: MenuSurface;
    let openSurface = false;

</script>

<div class="absolute inset-0 font-sans bg-[url(/img/bg.jpg)] bg-no-repeat bg-cover">
	<div class="flex flex-col h-full items-strech">
		<nav class="bg-white h-2rem flex items-center p-4">
            <Button>Home</Button>
            <Button>Courses</Button>
            <div class="flex-1"/>
			<div class="flex items-center md:order-2">
				<!-- Dropdown menu -->
                <button class="inline-flex items-center bg-white border-none rounded hover:bg-orange hover:bg-opacity-30 h-8 w-8 hover:bg-gray" on:click={() => {
                surface.setOpen(openSurface)
                    openSurface = !openSurface
                }}>
                    <svg class="h-8 w-8" xmlns="http://www.w3.org/2000/svg" width="32" height="32" viewBox="0 0 24 24"><path fill="currentColor" d="M3 4h18v2H3V4Zm0 7h18v2H3v-2Zm0 7h18v2H3v-2Z"/></svg>
                </button>
					<MenuSurface bind:this={surface} anchorCorner="BOTTOM_LEFT">
						<div style="margin: 1em; display: flex; flex-direction: column; align-items: flex-end;">
							<Button style="margin-top: 1em;" on:click={() => surface.setOpen(false)}>
								Submit
							</Button>
						</div>
					</MenuSurface>
			</div>
		</nav>
		<slot />
	</div>
</div>
