#include <stddef.h>

char *bt_strrchr(const char *s, int c)
{
	size_t i, last = 0, found = 0;

	for (i = 0 ; s[i] != '\0'; i++)
		if (s[i] == c)
			last = i, found = 1;

	if (found)
		return (char *)s + last;
	return (c == '\0') ? (char *)s + i : NULL;
}
