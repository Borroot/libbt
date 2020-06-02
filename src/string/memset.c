#include <stddef.h>

void *bt_memset(void *s, int c, size_t n)
{
	for (size_t i = 0; i < n; i++)
		*((char *)s + i) = c;
	return s;
}
