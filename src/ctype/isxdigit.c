#include "bt_ctype.h"

int bt_isxdigit(int c)
{
	return bt_isdigit(c) || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F');
}
