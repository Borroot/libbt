#include <unistd.h>
#include "bt_string.h"

void bt_putendl_fd(const char *s, int fd)
{
	write(fd, s, bt_strlen(s));
	char c = '\n';
	write(fd, &c, sizeof(char));
}
