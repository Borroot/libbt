#include <stddef.h>
#include "bt_string.h"

int bt_strequ(const char *s1, const char *s2)
{
	return (bt_strcmp(s1, s2)) ? 0 : 1;
}
