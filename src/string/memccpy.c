#include <stddef.h>

void *bt_memccpy(void *dst, const void *src, int c, size_t n)
{
	for (size_t i = 0; i < n; i++)
		if (((char *)src)[i] != c)
			((char *)dst)[i] = ((char *)src)[i];
		else
			return (char *)dst + i + 1;
	return NULL;
}
