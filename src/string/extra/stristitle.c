#include <stddef.h>
#include "bt_ctype.h"

int bt_stristitle(const char *s)
{
	int white = 1;

	for (size_t i = 0; s[i] != '\0'; i++) {
		if (white) {
			if (bt_islower(s[i]))
				return 0;
			else if (!bt_isstrip(s[i]))
				white = 0;
		} else {
			if (bt_isupper(s[i]))
				return 0;
			else if (bt_isstrip(s[i]))
				white = 1;
		}
	}
	return 1;
}
