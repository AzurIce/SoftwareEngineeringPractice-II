import { writable } from 'svelte/store';
import type { Course } from './models';

export const user = writable({} as { username: string; usergroup: number });
// export const hobbies = writable(initHobbies)

export const courseList = writable([] as Course[]);

export const joinedCourseList = writable([] as Course[]);

export const createdCourseList = writable([] as Course[]);
