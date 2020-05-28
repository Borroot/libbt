#include <stddef.h>
#include "x_string.h"

char *x_strcat(char *dst, const char *src)
{
	size_t dst_len = x_strlen(dst);
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
		dst[dst_len + i] = src[i];
	dst[dst_len + i] = '\0';

	return dst;
}
