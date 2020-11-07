#include <stddef.h>

int bt_stris(const char *s, int (*f)(char))
{
	for (size_t i = 0; s[i] != '\0'; i++)
		if (!(*f)(s[i]))
			return 0;
	return 1;
}
