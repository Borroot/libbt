#include <stddef.h>

char *bt_strfunc(char *s, char (*f)(char))
{
	for (size_t i = 0; s[i] != '\0'; i++)
		s[i] = (*f)(s[i]);
	return s;
}
