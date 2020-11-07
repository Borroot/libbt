#include <stddef.h>
#include "bt_string.h"
#include "bt_ctype.h"

char *bt_strlstrip(const char *s)
{
	size_t start;

	for (start = 0; bt_isstrip(s[start]) && s[start] != '\0'; start++)
		;
	size_t len = bt_strlen(s + start);

	return bt_strsub(s, start, len + 1);
}
