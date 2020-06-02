#include "bt_ctype.h"

int bt_tolower(int c)
{
	if (bt_isupper(c))
		return 'a' + (c - 'A');
	return c;
}
