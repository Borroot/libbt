#include <stddef.h>
#include <stdlib.h>
#include "bt_string.h"

char *bt_strmap(const char *s, char (*f)(char))
{
	char *map = (char *)malloc(bt_strlen(s) + 1);
	size_t i;

	if (map != NULL) {
		for (i = 0; s[i] != '\0'; i++)
			map[i] = (*f)(s[i]);
		map[i] = '\0';
	}

	return map;
}