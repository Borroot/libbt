#include <stddef.h>

char *bt_stpcpy(char *dst, const char *src)
{
	size_t i;

	for (i = 0; (dst[i] = src[i]) != '\0'; i++)
		;

	return dst + i;
}
