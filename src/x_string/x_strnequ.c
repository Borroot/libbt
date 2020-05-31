#include <stddef.h>
#include "x_string.h"

int x_strnequ(const char *s1, const char *s2, size_t n)
{
	return (x_strncmp(s1, s2, n)) ? 0 : 1;
}
