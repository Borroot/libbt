#include <unistd.h>
#include <stdlib.h>
#include "bt_stdlib.h"
#include "bt_string.h"

void bt_putnbr(int n)
{
	char *s = bt_itoa(n);
	write(1, s, bt_strlen(s));
	free(s);
}
