import { writable } from 'svelte/store';

export const user = writable({} as { username: string; usergroup: number });
// export const hobbies = writable(initHobbies)
