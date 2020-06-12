#include <stddef.h>
#include <stdlib.h>
#include "bt_string.h"

void *bt_memalloc(size_t size)
{
	void *s = malloc(size);

	if (s != NULL)
		bt_memset(s, '\0', size);
	return s;
}
