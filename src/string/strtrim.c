#include <stddef.h>
#include <stdlib.h>
#include "bt_string.h"

static int istrim(int c)
{
	return c == ' ' || c == '\t' || c == '\n';
}

char *bt_strtrim(const char *s)
{
	size_t start;
	size_t end;

	for (start = 0; istrim(s[start]) && s[start] != '\0'; start++)
		;
	size_t len = bt_strlen(s + start);
	for (end = start + len - 1; end > start && istrim(s[end]); end--)
		;

	return bt_strsub(s, start, end - start + 1);
}
