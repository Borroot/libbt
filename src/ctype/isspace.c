#include "bt_ctype.h"

int bt_isspace(int c)
{
	return bt_isblank(c) || c == '\f' || c == '\n' || c == '\r' || c == '\v';
}
