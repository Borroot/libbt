#include <stddef.h>
#include "bt_string.h"
#include "bt_ctype.h"

char *bt_strstrip(const char *s)
{
	size_t start;
	size_t end;

	for (start = 0; bt_isstrip(s[start]) && s[start] != '\0'; start++)
		;
	size_t len = bt_strlen(s + start);
	for (end = start + len - 1; end > start && bt_isstrip(s[end]); end--)
		;

	return bt_strsub(s, start, end - start + 1);
}
