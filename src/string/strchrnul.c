#include <stddef.h>

char *bt_strchrnul(const char *s, int c)
{
	size_t i;

	for (i = 0 ; s[i] != '\0'; i++)
		if (s[i] == c)
			return (char *)s + i;

	return (char *)s + i;
}
