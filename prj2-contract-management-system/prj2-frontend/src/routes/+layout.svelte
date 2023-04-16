<script>
	import { afterNavigate, goto } from "$app/navigation";
	afterNavigate((nav) => {
    // If not logged in, goto login page
    console.log(nav)
    if (localStorage.getItem("prj2-jwt") == null) {
      // nav.cancel()
      if (nav.to?.route.id != "/login" && nav.to?.route.id != "/register") goto('/login')
    }
	  // console.log(nav);
	});
</script>

<div
  class="absolute inset-0 flex flex-col h-full items-stretch overflow-hidden font-sans bg-[url(/img/bg.jpg)] bg-no-repeat bg-cover"
>
  <slot />
</div>
