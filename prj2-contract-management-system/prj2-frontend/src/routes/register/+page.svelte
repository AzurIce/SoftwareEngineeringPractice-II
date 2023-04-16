<script lang="ts">
  let username = "";
  let password = "";
  let confirmedPassword = "";

  import { register } from "../../lib/api/user";

  function onRegistered(data: any) {
    // this.$store.commit("setToken", data.token);
    // this.$store.commit("setLogin");
    // this.$store.commit("setUser", data.user);
    // localStorage.setItem("ACHToken", data.token);
    // this.$router.push("/");
  }
  function onRegister() {
    if (username == "") {
      // TODO: 用户名不能为空
      return;
    }
    register(username, password)
      .then((res) => {
        console.log(res);
        res = res.data;
        onRegistered(res.data);
      })
      .catch((err) => {
        console.log(err);
        err = err.response.data;
        // TODO: toast
        console.log(err.error);
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
    <!-- 登录 -->
    <p class="m-0 mb-3 text-2xl mr-1 flex-1">注册账号</p>
    <div class="space-y-2 w-full">
      <div class="flex flex-col items-strech gap-2">
        <!-- 用户名 -->
        <div class="flex flex-col items-strech">
          <label
            for="username"
            class="block mb-2 text-sm font-medium text-gray-900 dark:text-white"
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
        <div class="mb-6 flex flex-col items-strech">
          <label
            for="password"
            class="block mb-2 text-sm font-medium text-gray-900 dark:text-white"
            >Password</label
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
