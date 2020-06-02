#include "bt_ctype.h"

int bt_isalpha(int c)
{
	return bt_isupper(c) || bt_islower(c);
}
