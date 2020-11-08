#ifndef BT_CTYPE_H_
#define BT_CTYPE_H_

/* Create a variant for every ctype function with a 'char' argument. */
#define FUNCTIONS_IS(fname)   \
	int fname(int);           \
	int fname##_char(char);   \

#define FUNCTIONS_TO(fname)   \
	FUNCTIONS_IS(fname)       \
	char fname##_chars(char); \

FUNCTIONS_IS(bt_isalnum)
FUNCTIONS_IS(bt_isalpha)
FUNCTIONS_IS(bt_isascii)
FUNCTIONS_IS(bt_isblank)
FUNCTIONS_IS(bt_iscntrl)
FUNCTIONS_IS(bt_isdigit)
FUNCTIONS_IS(bt_isgraph)
FUNCTIONS_IS(bt_islower)
FUNCTIONS_IS(bt_isprint)
FUNCTIONS_IS(bt_ispunct)
FUNCTIONS_IS(bt_isspace)
FUNCTIONS_IS(bt_isstrip)
FUNCTIONS_IS(bt_isupper)
FUNCTIONS_IS(bt_isxdigit)

FUNCTIONS_TO(bt_tolower)
FUNCTIONS_TO(bt_toupper)

#endif /* BT_CTYPE_H_ */
