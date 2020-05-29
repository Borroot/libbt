#include <stddef.h>
#include "x_string.h"

char *x_strcat(char *dst, const char *src)
{
	size_t dst_len = x_strlen(dst);

	for (size_t i = 0; (dst[dst_len + i] = src[i]) != '\0'; i++)
		;

	return dst;
}
