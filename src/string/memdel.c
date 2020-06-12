#include <stdlib.h>

void bt_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}
