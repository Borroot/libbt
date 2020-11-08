#include "bt_ctype.h"

/* Create a variant for every ctype function with a 'char' argument. */
#define VARIANT_IS(f) \
	int  f##_char (char c) { return f((int)c); }

#define VARIANT_TO(f) \
	VARIANT_IS(f)     \
	char f##_chars(char c) { return (char)f((int)c); }

VARIANT_IS(bt_isalnum)
VARIANT_IS(bt_isalpha)
VARIANT_IS(bt_isascii)
VARIANT_IS(bt_isblank)
VARIANT_IS(bt_iscntrl)
VARIANT_IS(bt_isdigit)
VARIANT_IS(bt_isgraph)
VARIANT_IS(bt_islower)
VARIANT_IS(bt_isprint)
VARIANT_IS(bt_ispunct)
VARIANT_IS(bt_isspace)
VARIANT_IS(bt_isstrip)
VARIANT_IS(bt_isupper)
VARIANT_IS(bt_isxdigit)

VARIANT_TO(bt_tolower)
VARIANT_TO(bt_toupper)
