#include "bt_ctype.h"

int bt_toupper(int c)
{
	if (bt_islower(c))
		return 'A' + (c - 'a');
	return c;
}
