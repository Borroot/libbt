#include <unistd.h>
#include <stdlib.h>
#include "bt_stdlib.h"
#include "bt_string.h"

void bt_putnbr_fd(int n, int fd)
{
	char *s = bt_itoa(n);
	write(fd, s, bt_strlen(s));
	free(s);
}
