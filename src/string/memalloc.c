#include <stddef.h>
#include <stdlib.h>
#include "bt_string.h"

void *bt_memalloc(size_t size)
{
	void *p = malloc(size);

	if (p != NULL)
		bt_memset(p, '\0', size);
	return p;
}
