#include <stdlib.h>
#include <stddef.h>
#include "bt_string.h"

char *bt_strdup(const char *s)
{
	char *dup = (char *)malloc(bt_strlen(s) + 1);
	return dup == NULL ? NULL : bt_strcpy(dup, s);
}
