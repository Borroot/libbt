#include <stddef.h>
#include "bt_ctype.h"

char *bt_strswapcase(char *s)
{
	for (size_t i = 0; s[i] != '\0'; i++) {
		if (bt_islower(s[i]))
			s[i] = bt_toupper(s[i]);
		else if(bt_isupper(s[i]))
			s[i] = bt_tolower(s[i]);
	}
	return s;
}
