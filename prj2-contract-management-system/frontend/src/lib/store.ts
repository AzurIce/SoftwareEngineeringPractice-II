import { writable } from 'svelte/store';
import type { Course } from './models';

export const user = writable({} as { username: string; usergroup: number });

export const courseList = writable([] as Course[]);

export const joinedCourseList = writable([] as Course[]);

export const createdCourseList = writable([] as Course[]);

// import { getCourses, getCreatedCourses, getJoinedCourses } from '$lib/api/course';
// export function updateCourseList() {
//     getCourses()
//         .then((res) => {
//             res = res.data;
//             console.log("[updateCourseList(/)/getCourses]: success ", res);
//             courseList.update(() => res.data || []);
//         })
//         .catch((err) => {
//             console.log("[updateCourseList(/)/getCourses]: failed ", err);
//         });
//     getJoinedCourses()
//         .then((res) => {
//             res = res.data;
//             console.log("[updateCourseList(/)/getJoinedCourses]: success ", res);
//             courseList.update(() => res.data || []);
//         })
//         .catch((err) => {
//             console.log("[updateCourseList(/)/getJoinedCourses]: failed ", err);
//         });
//     getCreatedCourses()
//         .then((res) => {
//             res = res.data;
//             console.log("[updateCourseList(/)/getCreatedCourses]: success ", res);
//             courseList.update(() => res.data || []);
//         })
//         .catch((err) => {
//             console.log("[updateCourseList(/)/getCreatedCourses]: failed ", err);
//         });
// }
