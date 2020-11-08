#include <stddef.h>
#include <stdlib.h>
#include "bt_string.h"

char *bt_strcenter(const char *s, size_t width)
{
	size_t len = bt_strnlen(s, width + 1);

	if (len >= width)
		return bt_strdup(s);

	int lpad = (width - len) / 2;
	int rpad = width - len - lpad;

	char *new = (char *)malloc(sizeof(char) * (width + 1));
	if (new != NULL) {
		bt_memset(new, ' ', lpad);
		bt_strcpy(new + lpad, s);
		bt_memset(new + lpad + len, ' ', rpad);
		new[width] = '\0';
	}
	return new;
}
