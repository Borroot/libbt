#include <stddef.h>

void bt_striteri(char *s, void (*f)(unsigned int, char *))
{
	for (size_t i = 0; s[i] != '\0'; i++)
		(*f)(i, s + i);
}
