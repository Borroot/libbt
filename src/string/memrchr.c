#include <stddef.h>

void *bt_memrchr(const void *s, int c, size_t n)
{
	for (int i = n - 1; i >= 0; i--)
		if (((char *)s)[i] == c)
			return (char *)s + i;
	return NULL;
}
