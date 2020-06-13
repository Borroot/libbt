#include <unistd.h>
#include "bt_stdio.h"
#include "bt_string.h"

void bt_putendl(const char *s)
{
	write(1, s, bt_strlen(s));
	char c = '\n';
	write(1, &c, 1);
}
