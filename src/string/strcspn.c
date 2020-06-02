#include <stddef.h>
#include "bt_string.h"

size_t bt_strcspn(const char *s, const char *reject)
{
	size_t count = 0;
	for (size_t i = 0; s[i] != '\0'; i++) {
		for (size_t j = 0; reject[j] != '\0'; j++)
			if (s[i] == reject[j])
				return count;
		count++;
	}
	return count;
}
