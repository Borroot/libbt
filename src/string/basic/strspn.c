#include <stddef.h>
#include "bt_string.h"

size_t bt_strspn(const char *s, const char *accept)
{
	size_t count = 0;
	for (size_t i = 0; s[i] != '\0'; i++) {
		int found = 0;
		for (size_t j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j]) {
				count++, found = 1;
				break;
			}
		if (!found)
			return count;
	}
	return count;
}
