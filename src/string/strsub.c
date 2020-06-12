#include <stddef.h>
#include <stdlib.h>

char *bt_strsub(const char *s, unsigned int start, size_t len)
{
	char *sub = (char *)malloc(len + 1);

	if (sub != NULL) {
		for (size_t i = 0; i < len; i++)
			sub[i] = s[start + i];
		sub[len] = '\0';
	}
	return sub;
}
