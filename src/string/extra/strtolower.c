#include <stddef.h>
#include "bt_ctype.h"
#include "bt_string.h"

char *bt_strtolower(char *s)
{
	return bt_strfunc(s, bt_tolower_chars);
}
