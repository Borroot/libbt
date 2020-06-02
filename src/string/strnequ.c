#include <stddef.h>
#include "bt_string.h"

int bt_strnequ(const char *s1, const char *s2, size_t n)
{
	return (bt_strncmp(s1, s2, n)) ? 0 : 1;
}
