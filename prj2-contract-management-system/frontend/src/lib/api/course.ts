import { get, postByJson } from './utils/axios';

export function exitCourse(id: number): Promise<any> {
    return postByJson('/api/course/exit', {courseId: id});
}

export function joinCourse(id: number): Promise<any> {
    return postByJson('/api/course/join', {courseId: id});
}

export function getCourses(): Promise<any> {
	return get('/api/course');
}

export function getJoinedCourses(): Promise<any> {
	return get('/api/course/joined');
}

export function getCreatedCourses(): Promise<any> {
	return get('/api/course/created');
}

export function createCourse(name: string, description: string, isPrivate: boolean): Promise<any> {
	return postByJson('/api/course', { name, description, isPrivate });
}
