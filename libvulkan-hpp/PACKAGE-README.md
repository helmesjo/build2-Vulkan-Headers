# libvulkan-hpp - The C++ headers for the Vulkan graphics API

This is a `build2` package for the
[`Vulkan-Headers`](https://github.com/KhronosGroup/Vulkan-Headers)
C++ library. It provides the public C++ headers for the Vulkan graphics and
compute API (`vulkan/vulkan.hpp` and related headers, including the RAII
wrappers). The C headers come from the companion `libvulkan-headers`
package, which this package depends on.


## Usage

To start using `libvulkan-hpp` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libvulkan-hpp ^1.4.359
```

Then import the library in your `buildfile`:

```
import libs = libvulkan-hpp%lib{vulkan-hpp}
```


## Importable targets

This package provides the following importable targets:

```
lib{vulkan-hpp}
lib{vulkan-hpp-module}
```

`lib{vulkan-hpp}` is the Vulkan C++ headers.

`lib{vulkan-hpp-module}` is the experimental `vulkan` and `vulkan_video`
named modules. Import it only when the amalgamation enables C++ modules
(`config.cxx.features.modules=true`). This requires a C++23 compiler and
standard library with `import std;` support.


## Configuration variables

This package has no configuration variables.
