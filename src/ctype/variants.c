#include "bt_ctype.h"

/* Create a variant for every ctype function with a 'char' argument. */
#define VARIANT(f) int f##_char(char c) { return f((int)c); }

VARIANT(bt_isalnum)
VARIANT(bt_isalpha)
VARIANT(bt_isascii)
VARIANT(bt_isblank)
VARIANT(bt_iscntrl)
VARIANT(bt_isdigit)
VARIANT(bt_isgraph)
VARIANT(bt_islower)
VARIANT(bt_isprint)
VARIANT(bt_ispunct)
VARIANT(bt_isspace)
VARIANT(bt_isupper)
VARIANT(bt_isxdigit)

VARIANT(bt_tolower)
VARIANT(bt_toupper)
