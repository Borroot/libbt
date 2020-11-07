#include <stddef.h>
#include "bt_ctype.h"

char *bt_strcasestr(const char *haystack, const char *needle)
{
	if (needle[0] == '\0')
		return (char *)haystack;

	size_t current = 0;
	for (size_t i = 0; haystack[i] != '\0'; i++) {
		if (bt_tolower(needle[current]) == bt_tolower(haystack[i])) {
			if (needle[current + 1] == '\0')
				return (char *)haystack + i - current;
			current++;
		} else
			current = 0;
	}
	return NULL;
}
