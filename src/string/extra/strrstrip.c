#include <stddef.h>
#include "bt_string.h"
#include "bt_ctype.h"

char *bt_strrstrip(const char *s)
{
	size_t end;
	size_t len = bt_strlen(s);

	for (end = len - 1; end > 0 && bt_isstrip(s[end]); end--)
		;

	return bt_strsub(s, 0, end + 1);
}
