#include <stdlib.h>
#include <stddef.h>
#include "bt_string.h"

char *bt_strndup(const char *s, size_t n)
{
	char *dup = (char *)malloc(bt_strnlen(s, n) + 1);

	if (dup != NULL) {
		bt_strncpy(dup, s, n);
		dup[n] = '\0';
	}
	return dup;
}
