#include <stdlib.h>
#include <stddef.h>
#include "x_string.h"

char *x_strndup(const char *s, size_t n)
{
	size_t len = x_strnlen(s, n);
	char *dup = (char *)malloc(len);

	if (dup == NULL)
		return NULL;
	return x_strncpy(dup, s, n);
}
