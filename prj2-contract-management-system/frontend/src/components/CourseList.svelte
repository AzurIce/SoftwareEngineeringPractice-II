<script lang="ts">
	import type { Course } from '../lib/models';
	import DataTable, { Head, Body, Row, Cell } from '@smui/data-table';
    import Chip, { Set, Text } from '@smui/chips';
    import Button from '@smui/button';
	// import LinearProgress from "@smui/linear-progress"

	export let courseList: Course[] = [
		{
			id: 999,
			creater_id: 9999,
			name: 'courseName',
			description:
				'courseDescriptionnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn',
            is_private: false
		},
		{
			id: 998,
			creater_id: 9999,
			name: 'courseName',
			description:
				'courseDescriptionnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn',
            is_private: false
		}
	];

    function cut(str: string): string {
        if (str.length > 50) {
            return str.substr(0, 49) + '...';
        } else {
            return str;
        }
    }
</script>

<div>
	<DataTable table$aria-label="User list" style="width: 100%;">
		<Head>
			<Row>
				<Cell numeric>ID</Cell>
				<Cell>CreaterID</Cell>
				<Cell>Name</Cell>
				<Cell style="width: 100%;">Description</Cell>
				<Cell>Actions</Cell>
			</Row>
		</Head>
		<Body>
			{#each courseList as course}
				<Row>
					<Cell numeric>{course.id}</Cell>
					<Cell>{course.creater_id}</Cell>
					<Cell>
                        {course.name}
                        {#if course.is_private}
                            <span class="bg-gray-200 rounded-full w-min p-2">Private</span>
                        {/if}
                    </Cell>
					<Cell>
                        {cut(course.description)}
                    </Cell>
					<Cell><Button>Join</Button></Cell>
				</Row>
			{/each}
		</Body>

		<!--  <LinearProgress
    indeterminate
    bind:closed={loaded}
    aria-label="Data is being loaded..."
    slot="progress"
  /> -->
	</DataTable>
</div>
