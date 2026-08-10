import vulkan;
import vulkan_video;

#undef NDEBUG
#include <cassert>

int main ()
{
  assert (vk::makeApiVersion (0, 1, 0, 0) == VK_API_VERSION_1_0);
  return 0;
}
