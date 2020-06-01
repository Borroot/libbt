#include <stddef.h>

int x_memcmp(const void *s1, const void *s2, size_t n)
{
	for (size_t i = 0; i < n; i++)
		if (((char *)s1)[i] - ((char *)s2)[i] != 0)
			return ((char *)s1)[i] - ((char *)s2)[i];
	return 0;
}
