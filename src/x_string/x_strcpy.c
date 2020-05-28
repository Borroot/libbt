#include <stddef.h>

char *x_strcpy(char *dst, const char *src)
{
	size_t i = 0;

	while (src[i] != '\0') {
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';

	return dst;
}
