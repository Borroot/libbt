#include <stddef.h>

size_t bt_strnlen(const char *s, size_t maxlen)
{
	size_t i;

	for (i = 0; s[i] != '\0' && i < maxlen; i++)
		;

	return i;
}
