#include <stdlib.h>
#include <stddef.h>
#include "x_string.h"

char *x_strndup(const char *s, size_t n)
{
	char *dup = (char *)malloc(x_strnlen(s, n) + 1);

	if (dup != NULL) {
		x_strncpy(dup, s, n);
		dup[n] = '\0';
	}
	return dup;
}
