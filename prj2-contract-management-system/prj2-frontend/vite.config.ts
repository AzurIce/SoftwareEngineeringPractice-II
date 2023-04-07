import { sveltekit } from '@sveltejs/kit/vite';
import UnoCSS from 'unocss/vite';
import { extractorSvelte } from '@unocss/core';
import { defineConfig } from 'vite';
import { presetIcons, presetUno } from 'unocss';

export default defineConfig({
	plugins: [
		UnoCSS({
			extractors: [extractorSvelte],
      // presets: [
      //   presetUno(),
      //   presetIcons({ /* options */ }),
      // ],
			/* more options */
		}),
		sveltekit()
	]
});
