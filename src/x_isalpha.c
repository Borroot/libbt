#include "libx.h"

int x_isalpha(int c)
{
	return x_isupper(c) || x_islower(c);
}
