#include <stddef.h>
#include "bt_string.h"

char *bt_strsub(const char *s, unsigned int start, size_t len)
{
	return bt_strndup(s + start, len);
}
