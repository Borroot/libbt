#include "bt_ctype.h"

int bt_isstrip(int c)
{
	return bt_isblank(c) || c == '\n';
}
