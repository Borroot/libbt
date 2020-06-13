#include <unistd.h>
#include "bt_string.h"

void bt_putstr_fd(const char *s, int fd)
{
	write(fd, s, bt_strlen(s));
}
