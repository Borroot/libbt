#include <stddef.h>

void bt_striter(char *s, void (*f)(char *))
{
	for (size_t i = 0; s[i] != '\0'; i++)
		(*f)(s + i);
}
