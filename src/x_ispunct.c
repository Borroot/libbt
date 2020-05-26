#include "x_ctype.h"

int x_ispunct(int c)
{
	return x_isprint(c) && !x_isalnum(c) && c != ' ';
}
