#include <stdlib.h>
#include <stddef.h>
#include "x_string.h"

char *x_strdup(const char *s)
{
	char *dup = (char *)malloc(x_strlen(s) + 1);

	if (dup == NULL)
		return NULL;
	return x_strcpy(dup, s);
}
