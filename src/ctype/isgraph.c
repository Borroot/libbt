#include "bt_ctype.h"

int bt_isgraph(int c)
{
	return c != ' ' && bt_isprint(c);
}
