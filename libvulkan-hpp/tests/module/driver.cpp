// Local equivalent of upstream/tests/vk_hpp_module.cpp (that file
// imports vulkan_hpp, but vulkan.cppm exports module vulkan).
//
import vulkan;
import vulkan_video;

#undef NDEBUG
#include <cassert>

int test_version ()
{
  return static_cast<int> (vk::makeApiVersion (1, 0, 0, 0));
}

int main ()
{
  assert (vk::makeApiVersion (0, 1, 0, 0) == VK_API_VERSION_1_0);
  assert (test_version () == static_cast<int> (vk::makeApiVersion (1, 0, 0, 0)));
  return 0;
}
