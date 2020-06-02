#include "bt_ctype.h"

int bt_ispunct(int c)
{
	return bt_isprint(c) && !bt_isalnum(c) && c != ' ';
}
