# Vulkan-Headers - The C and C++ headers for the Vulkan graphics API

This is a `build2` package repository for
[`Vulkan-Headers`](https://github.com/KhronosGroup/Vulkan-Headers), containing
two packages: `libvulkan-headers` (the C headers) and `libvulkan-hpp` (the
C++ headers, which depend on `libvulkan-headers`).

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`libvulkan-headers` or `libvulkan-hpp` in your `build2`-based project, then
instead see the accompanying
[`libvulkan-headers/PACKAGE-README.md`](libvulkan-headers/PACKAGE-README.md) or
[`libvulkan-hpp/PACKAGE-README.md`](libvulkan-hpp/PACKAGE-README.md) file.

The development setup for `Vulkan-Headers` uses the standard `bdep`-based workflow.
For example:

```
git clone https://github.com/build2-packaging/Vulkan-Headers.git
cd Vulkan-Headers

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
