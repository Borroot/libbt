#include <stdlib.h>
#include <stddef.h>
#include "x_string.h"

char *x_strdup(const char *s)
{
	size_t len = x_strlen(s);
	char *dup = (char *)malloc(len);

	if (dup == NULL)
		return NULL;
	return x_strcpy(dup, s);
}
