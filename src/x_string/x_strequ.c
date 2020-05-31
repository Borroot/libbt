#include <stddef.h>
#include "x_string.h"

int x_strequ(const char *s1, const char *s2)
{
	return (x_strcmp(s1, s2)) ? 0 : 1;
}
