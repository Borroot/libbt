#include <stddef.h>

void bt_strclr(char *s)
{
	for (size_t i = 0; s[i] != '\0'; i++)
		s[i] = '\0';
}
