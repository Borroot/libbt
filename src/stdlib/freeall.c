#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>

void bt_freeall(size_t n, ...)
{
	va_list valist;
	va_start(valist, n);

	for (size_t i = 0; i < n; i++)
		free(va_arg(valist, void *));

	va_end(valist);
}
