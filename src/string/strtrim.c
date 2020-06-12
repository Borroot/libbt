#include <stddef.h>
#include <stdlib.h>
#include "bt_string.h"

static int istrim(int c)
{
	return c == ' ' || c == '\t' || c == '\n';
}

char *bt_strtrim(const char *s)
{
	size_t i;

	for (i = 0; istrim(s[i]) && s[i] != '\0'; i++)
		;
	size_t start = i;

	size_t len = bt_strlen(s + i);
	for (i = len - 1; i > start && istrim(s[start + i]); i--)
		;
	size_t end = start + i;

	char *trim = (char *)malloc(end - start + 1);
	if (trim != NULL) {
		for (i = start; i <= end; i++)
			trim[i - start] = s[i];
		trim[len] = '\0';
	}
	return trim;
}
