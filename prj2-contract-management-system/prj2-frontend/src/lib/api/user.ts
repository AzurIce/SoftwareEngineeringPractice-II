import { postByJson } from "./utils/axios"

export function register(username: string, password: string): Promise<any> {
    return postByJson('/api/user/register', { username, password })
}

export function login(username: string, password: string): Promise<any> {
    return postByJson('/api/user/login', { username, password })
}