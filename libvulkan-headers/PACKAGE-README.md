# libvulkan-headers - The C headers for the Vulkan graphics API

This is a `build2` package for the
[`Vulkan-Headers`](https://github.com/KhronosGroup/Vulkan-Headers)
C library. It provides the public C headers for the Vulkan graphics and
compute API (`vulkan/vulkan.h` and the `vk_video/` codec headers). The C++
headers are in the companion `libvulkan-hpp` package.


## Usage

To start using `libvulkan-headers` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libvulkan-headers ^1.4.359
```

Then import the library in your `buildfile`:

```
import libs = libvulkan-headers%lib{vulkan-headers}
```


## Importable targets

This package provides the following importable targets:

```
lib{vulkan-headers}
```

The Vulkan C headers (`#include <vulkan/...>` and `#include <vk_video/...>`).
The API registry is installed to `share/vulkan/registry/`. The 15MB
`validusage.json` blob is omitted.


## Configuration variables

This package has no configuration variables.
