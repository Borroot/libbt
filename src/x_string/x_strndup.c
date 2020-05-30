#include <stdlib.h>
#include <stddef.h>
#include "x_string.h"

char *x_strndup(const char *s, size_t n)
{
	char *dup = (char *)malloc(x_strnlen(s, n) + 1);
	return (dup == NULL) ? NULL : x_strncpy(dup, s, n);
}
