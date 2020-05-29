#include <stddef.h>

char *x_strncpy(char *dst, const char *src, size_t n)
{
	size_t i;

	for (i = 0; i < n && (dst[i] = src[i]) != '\0'; i++)
		;
	for ( ; i < n; i++)
		dst[i] = '\0';

	return dst;
}
