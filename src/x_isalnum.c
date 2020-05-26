#include "x_ctype.h"

int x_isalnum(int c)
{
	return x_isalpha(c) || x_isdigit(c);
}
