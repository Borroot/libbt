#include <stddef.h>

size_t x_strnlen(const char *s, size_t maxlen)
{
	size_t i = 0;

	for ( ; s[i] != '\0' && i < maxlen; i++)
		;

	return i;
}
