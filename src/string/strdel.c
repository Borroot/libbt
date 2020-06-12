#include <stdlib.h>
#include "bt_string.h"

void bt_strdel(char **as)
{
	free(*as);
	*as = NULL;
}
