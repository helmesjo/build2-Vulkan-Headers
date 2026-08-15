#include <vulkan/vulkan.h>

#undef NDEBUG
#include <assert.h>

/* Defined in vk_layer.c (symlinked from upstream/tests/), which upstream
 * itself only compile-checks. Call it here so it is actually exercised.
 */
extern int square (int);

int main ()
{
  assert (VK_MAKE_API_VERSION (0, 1, 0, 0) == VK_API_VERSION_1_0);
  assert (square (3) == 9);
  return 0;
}
