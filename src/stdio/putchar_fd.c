#include <unistd.h>

void bt_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
