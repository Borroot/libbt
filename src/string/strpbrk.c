#include <stddef.h>
#include "bt_string.h"

char *bt_strpbrk(const char *s, const char *accept)
{
	for (size_t i = 0; s[i] != '\0'; i++)
		for (size_t j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				return (char *)s + i;
	return NULL;
}
