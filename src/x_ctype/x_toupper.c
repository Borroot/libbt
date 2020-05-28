#include "x_ctype.h"

int x_toupper(int c)
{
	if (x_islower(c))
		return 'A' + (c - 'a');
	return c;
}
