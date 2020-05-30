#include <stdlib.h>
#include <stddef.h>
#include "x_string.h"

char *x_strdup(const char *s)
{
	char *dup = (char *)malloc(x_strlen(s) + 1);
	return (dup == NULL) ? NULL : x_strcpy(dup, s);
}
