#include <unistd.h>

void bt_putchar(char c)
{
	write(1, &c, 1);
}
