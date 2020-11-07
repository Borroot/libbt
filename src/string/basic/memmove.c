#include <stddef.h>
#include <stdlib.h>
#include "bt_string.h"

void *bt_memmove(void *dst, const void *src, size_t n)
{
	char *tmp = (char *)malloc(n);

	if (tmp != NULL) {
		bt_memcpy(tmp, src, n);
		for (size_t i = 0; i < n; i++)
			((char *)dst)[i] = ((char *)tmp)[i];
		free(tmp);
	}
	return dst;
}
