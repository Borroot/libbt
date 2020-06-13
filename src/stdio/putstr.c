#include <unistd.h>
#include "bt_string.h"

void bt_putstr(const char *s)
{
	write(1, s, bt_strlen(s));
}
