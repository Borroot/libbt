#include <stddef.h>

void *bt_memcpy(void *dst, const void *src, size_t n)
{
	for (size_t i = 0; i < n; i++)
		((char *)dst)[i] = ((char *)src)[i];
	return dst;
}
