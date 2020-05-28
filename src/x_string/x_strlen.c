#include <stddef.h>

size_t x_strlen(const char *s)
{
	size_t i = 0;

	for ( ; s[i] != '\0'; i++)
		;

	return i;
}
