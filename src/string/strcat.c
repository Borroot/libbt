#include <stddef.h>
#include "bt_string.h"

char *bt_strcat(char *dst, const char *src)
{
	size_t dst_len = bt_strlen(dst);

	for (size_t i = 0; (dst[dst_len + i] = src[i]) != '\0'; i++)
		;

	return dst;
}
