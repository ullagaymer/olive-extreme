# Olive Video Editor [![Build status](https://github.com/olive-editor/olive/workflows/CI/badge.svg?branch=master)](https://github.com/olive-editor/olive/actions?query=branch%3Amaster)

Olive is a free non-linear video editor for Windows, macOS, and Linux.

![screen](https://olivevideoeditor.org/img/020-2.png)

**Discover more:** [Website](https://www.olivevideoeditor.org/) | [Binaries](https://olivevideoeditor.org/download.php) | [Patreon](https://www.patreon.com/olivevideoeditor) | [Twitter](https://twitter.com/oliveteam) | [Wiki](https://github.com/olive-editor/olive/wiki/Overview-Guide) | [Community Discord (Unofficial)](https://discord.gg/4Ae9KZn)

**NOTE: Olive is alpha software and is considered highly unstable. While we highly appreciate users testing and providing usage information, please use at your own risk.**

## Binaries

[Nightly binaries are available on the website.](https://olivevideoeditor.org/download.php)

## Support Olive:

Please consider supporting Olive:

[![Become a Patron](https://olivevideoeditor.org/img/become_a_patron_button.png)](https://www.patreon.com/olivevideoeditor)

TODO list:
- [ ] Change the olive's default ocio config to a newer version (mix between aces and blender) 
- [ ] Add and change codec's  
  - [ ] add libaom-av1 codec
    - [ ] add pixel formats: yuv420p yuv422p yuv444p gbrp yuv420p10le yuv422p10le yuv444p10le yuv420p12le yuv422p12le yuv444p12le gbrp10le gbrp12le gray gray10le gray12le
    - [ ] expose render settings
  - [ ] add ffv1 codec  
    - [ ] add pixel formats: yuv420p yuva420p yuva422p yuv444p yuva444p yuv440p yuv422p yuv411p yuv410p bgr0 bgra yuv420p16le yuv422p16le yuv444p16le yuv444p9le yuv422p9le yuv420p9le yuv420p10le yuv422p10le yuv444p10le yuv420p12le yuv422p12le yuv444p12le yuva444p16le yuva422p16le yuva420p16le yuva444p12le yuva422p12le yuva444p10le yuva422p10le yuva420p10le yuva444p9le yuva422p9le yuva420p9le gray16le gray gbrp9le gbrp10le gbrp12le gbrp14le gbrap14le gbrap10le gbrap12le ya8 gray10le gray12le gray14le gbrp16le rgb48le gbrap16le rgba64le gray9le yuv420p14le yuv422p14le yuv444p14le yuv440p10le yuv440p12le
    - [ ] expose render settings
  - [ ] add libvpx-vp9 codec
    - [ ] add pixel formats: yuv420p yuva420p yuv422p yuv440p yuv444p yuv420p10le yuv422p10le yuv440p10le yuv444p10le yuv420p12le yuv422p12le yuv440p12le yuv444p12le gbrp gbrp10le gbrp12le
    - [ ] expose render settings

## Compiling from Source:

Compiling instructions for Windows, macOS, and Linux can be found [on the main site](https://olivevideoeditor.org/compile).
