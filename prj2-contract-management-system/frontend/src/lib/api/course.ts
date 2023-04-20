import { postByJson } from "./utils/axios";

export function createCourse(name: string, description: string, isPrivate: string): Promise<any> {
	return postByJson('/api/course', { name, description, isPrivate});
}
