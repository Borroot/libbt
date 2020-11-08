#include <stddef.h>
#include "bt_ctype.h"
#include "bt_string.h"

char *bt_strcapital(char *s)
{
	s[0] = bt_toupper(s[0]);
	return s;
}
