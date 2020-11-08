#include <stddef.h>
#include "bt_ctype.h"

char *bt_strtotitle(char *s)
{
	int white = 1;

	for (size_t i = 0; s[i] != '\0'; i++) {
		if (white) {
			if (bt_islower(s[i]))
				s[i] = bt_toupper(s[i]);
			if (!bt_isstrip(s[i]))
				white = 0;
		} else {
			if (bt_isupper(s[i]))
				s[i] = bt_tolower(s[i]);
			else if (bt_isstrip(s[i]))
				white = 1;
		}
	}
	return s;
}
