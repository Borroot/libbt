#include <stdlib.h>

void bt_memdel(void **s)
{
	free(*s);
	*s = NULL;
}
