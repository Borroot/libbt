#include <stddef.h>
#include "bt_string.h"

char *bt_strnew(size_t size)
{
	return (char *)bt_memalloc(size);
}
