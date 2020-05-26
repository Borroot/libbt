#include "x_ctype.h"

int x_isgraph(int c)
{
	return c != ' ' && x_isprint(c);
}
