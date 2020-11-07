#ifndef BT_CTYPE_H_
#define BT_CTYPE_H_

/* Create a variant for every ctype function with a 'char' argument. */
#define FUNCTIONS(fname)    \
	int fname(int);         \
	int fname##_char(char); \

FUNCTIONS(bt_isalnum)
FUNCTIONS(bt_isalpha)
FUNCTIONS(bt_isascii)
FUNCTIONS(bt_isblank)
FUNCTIONS(bt_iscntrl)
FUNCTIONS(bt_isdigit)
FUNCTIONS(bt_isgraph)
FUNCTIONS(bt_islower)
FUNCTIONS(bt_isprint)
FUNCTIONS(bt_ispunct)
FUNCTIONS(bt_isspace)
FUNCTIONS(bt_isstrip)
FUNCTIONS(bt_isupper)
FUNCTIONS(bt_isxdigit)

FUNCTIONS(bt_tolower)
FUNCTIONS(bt_toupper)

#endif /* BT_CTYPE_H_ */
