#include <stddef.h>

void *x_memset(void *s, int c, size_t n)
{
	for (size_t i = 0; i < n; i++)
		*((char *)s + i) = (unsigned char)c;
	return s;
}
