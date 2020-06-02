#include "bt_ctype.h"

int bt_isalnum(int c)
{
	return bt_isalpha(c) || bt_isdigit(c);
}
