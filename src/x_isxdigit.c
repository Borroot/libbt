#include "x_ctype.h"

int x_isxdigit(int c)
{
	return x_isdigit(c) || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F');
}
