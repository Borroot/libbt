#include "x_ctype.h"

int x_tolower(int c)
{
	if (x_isupper(c)) {
		return 'a' + (c - 'A');
	}
	return c;
}
