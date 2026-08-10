#include <vulkan/vulkan.h>
#include <vulkan/vulkan.hpp>

#undef NDEBUG
#include <cassert>

// Defined in vk_hpp.cpp (symlinked from upstream/tests/), which upstream
// itself only compile-checks; call it here so it is actually exercised.
//
extern int test_version ();

int main ()
{
  assert (vk::makeApiVersion (0, 1, 0, 0) == VK_API_VERSION_1_0);
  assert (test_version () == static_cast<int> (vk::makeApiVersion (1, 0, 0, 0)));
  return 0;
}
