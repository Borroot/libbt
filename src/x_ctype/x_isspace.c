#include "x_ctype.h"

int x_isspace(int c)
{
	return x_isblank(c) || c == '\f' || c == '\n' || c == '\r' || c == '\v';
}
