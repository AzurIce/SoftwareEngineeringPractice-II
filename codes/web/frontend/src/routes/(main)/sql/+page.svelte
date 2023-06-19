<script lang="ts">
	import { postSQL } from "$lib/api/course";
	import Button from "@smui/button/src/Button.svelte";
import Textfield from "@smui/textfield";
	import SnackbarList from "../../../components/SnackbarList.svelte";

    let sql = ""


    let messages: { type: string, msg: string }[] = [];
    function joinMessage(type: string, msg: any) {
        messages.push({type, msg: msg as string});
        messages = messages;
    }

    let result = ""
</script>

<Textfield bind:value={sql} />

<Button on:click={()=>{
    postSQL(sql).then((res) => {
        console.log(res.data.data)
        result = res.data.data
        // result = res.data.data.replace(/\n/g, "<br/>")
        // messages.push({
        //     type: "success",
        //     msg: "res"
        // })
    }).catch((err)=>{
        console.log(err)
    })
}}>提交</Button>

<div class="bg-white rounded flex-1" style="white-space: pre-wrap;">
    {result}
</div>

<SnackbarList bind:messages/>