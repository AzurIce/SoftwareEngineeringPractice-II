// uno.config.ts
import { defineConfig, presetIcons, presetUno } from 'unocss';
import { presetFlowbite } from '@julr/unocss-preset-flowbite'

export default defineConfig({
  // ...UnoCSS options
  presets: [
    presetUno(),
    presetFlowbite(),
    presetIcons({ /* options */ }),
  ],
})