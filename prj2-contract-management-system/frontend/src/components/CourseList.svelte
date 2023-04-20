<script lang="ts">
	import type { Course } from '../lib/models';
	import DataTable, { Head, Body, Row, Cell } from '@smui/data-table';
	// import LinearProgress from "@smui/linear-progress"

	export let courseList: Course[] = [
		{
			id: 999,
			creater_id: 9999,
			name: 'courseName',
			description:
				'courseDescriptionnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn'
		},
		{
			id: 998,
			creater_id: 9999,
			name: 'courseName',
			description:
				'courseDescriptionnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn'
		}
	];
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
                    <Cell>{course.name}</Cell>
					<Cell>{course.description}</Cell>
					<Cell>action...</Cell>
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
