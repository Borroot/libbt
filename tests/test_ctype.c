#include <criterion/criterion.h>
#include <bt_ctype.h>

Test(ctype, isalnum)
{
	cr_assert(bt_isalnum('a'));
	cr_assert(bt_isalnum('A'));
	cr_assert(bt_isalnum('0'));
	cr_assert(bt_isalnum('9'));
	cr_assert(!bt_isalnum('!'));
	cr_assert(!bt_isalnum('\0'));
}

Test(ctype, isalpha)
{
	cr_assert(bt_isalpha('a'));
	cr_assert(bt_isalpha('n'));
	cr_assert(bt_isalpha('z'));
	cr_assert(bt_isalpha('A'));
	cr_assert(bt_isalpha('N'));
	cr_assert(bt_isalpha('Z'));
	cr_assert(!bt_isalpha('1'));
	cr_assert(!bt_isalpha('!'));
	cr_assert(!bt_isalpha('\0'));
}

Test(ctype, isascii)
{
	cr_assert(bt_isascii('\0'));
	cr_assert(bt_isascii('0'));
	cr_assert(bt_isascii('a'));
	cr_assert(bt_isascii('A'));
	cr_assert(bt_isascii('!'));
	cr_assert(bt_isascii('@'));
	cr_assert(bt_isascii(0));
	cr_assert(bt_isascii(127));
	cr_assert(!bt_isascii(-1));
	cr_assert(!bt_isascii(128));
}

Test(ctype, isblank)
{
	cr_assert(bt_isblank(' '));
	cr_assert(bt_isblank('\t'));
	cr_assert(!bt_isblank('\n'));
	cr_assert(!bt_isblank('\r'));
	cr_assert(!bt_isblank('\0'));
}

Test(ctype, iscntrl)
{
	cr_assert(bt_iscntrl('\0'));
	cr_assert(bt_iscntrl('\t'));
	cr_assert(bt_iscntrl('\n'));
	cr_assert(bt_iscntrl('\r'));
	cr_assert(bt_iscntrl('\b'));
	cr_assert(bt_iscntrl(0));
	cr_assert(bt_iscntrl(31));
	cr_assert(bt_iscntrl(127));
	cr_assert(!bt_iscntrl(32));
	cr_assert(!bt_iscntrl(126));
}

Test(ctype, isdigit)
{
	cr_assert(bt_isdigit('0'));
	cr_assert(bt_isdigit('5'));
	cr_assert(bt_isdigit('9'));
	cr_assert(!bt_isdigit('a'));
	cr_assert(!bt_isdigit('!'));
	cr_assert(!bt_isdigit('\0'));
}

Test(ctype, isgraph)
{
	cr_assert(bt_isgraph('0'));
	cr_assert(bt_isgraph('a'));
	cr_assert(bt_isgraph('A'));
	cr_assert(bt_isgraph('!'));
	cr_assert(bt_isgraph('~'));
	cr_assert(bt_isgraph('\''));
	cr_assert(!bt_isgraph(' '));
	cr_assert(!bt_isgraph(127));
	cr_assert(!bt_isgraph('\0'));
	cr_assert(!bt_isgraph('\r'));
	cr_assert(!bt_isgraph('\n'));
}

Test(ctype, islower)
{
	cr_assert(bt_islower('a'));
	cr_assert(bt_islower('n'));
	cr_assert(bt_islower('z'));
	cr_assert(!bt_islower('A'));
	cr_assert(!bt_islower('Z'));
	cr_assert(!bt_islower('!'));
	cr_assert(!bt_islower('\0'));
}

Test(ctype, isprint)
{
	cr_assert(bt_isprint('0'));
	cr_assert(bt_isprint('a'));
	cr_assert(bt_isprint('A'));
	cr_assert(bt_isprint('!'));
	cr_assert(bt_isprint(' '));
	cr_assert(bt_isprint('~'));
	cr_assert(bt_isprint('\''));
	cr_assert(!bt_isprint(127));
	cr_assert(!bt_isprint('\0'));
	cr_assert(!bt_isprint('\r'));
	cr_assert(!bt_isprint('\n'));
}

Test(ctype, ispunct)
{
	cr_assert(bt_ispunct('!'));
	cr_assert(bt_ispunct('@'));
	cr_assert(bt_ispunct('"'));
	cr_assert(bt_ispunct('['));
	cr_assert(bt_ispunct('~'));
	cr_assert(!bt_ispunct(' '));
	cr_assert(!bt_ispunct('a'));
	cr_assert(!bt_ispunct('A'));
	cr_assert(!bt_ispunct('0'));
	cr_assert(!bt_ispunct('\0'));
}

Test(ctype, isspace)
{
	cr_assert(bt_isspace(' '));
	cr_assert(bt_isspace('\t'));
	cr_assert(bt_isspace('\f'));
	cr_assert(bt_isspace('\n'));
	cr_assert(bt_isspace('\r'));
	cr_assert(bt_isspace('\v'));
	cr_assert(!bt_isspace('a'));
	cr_assert(!bt_isspace('0'));
	cr_assert(!bt_isspace('!'));
	cr_assert(!bt_isspace('\0'));
}

Test(ctype, isupper)
{
	cr_assert(bt_isupper('A'));
	cr_assert(bt_isupper('N'));
	cr_assert(bt_isupper('Z'));
	cr_assert(!bt_isupper('a'));
	cr_assert(!bt_isupper('z'));
	cr_assert(!bt_isupper('!'));
	cr_assert(!bt_isupper('\0'));
}

Test(ctype, isxdigit)
{
	cr_assert(bt_isxdigit('0'));
	cr_assert(bt_isxdigit('5'));
	cr_assert(bt_isxdigit('9'));
	cr_assert(bt_isxdigit('a'));
	cr_assert(bt_isxdigit('f'));
	cr_assert(bt_isxdigit('A'));
	cr_assert(bt_isxdigit('F'));
	cr_assert(!bt_isxdigit('g'));
	cr_assert(!bt_isxdigit('\0'));
}

Test(ctype, tolower)
{
	cr_assert(bt_tolower('A') == 'a');
	cr_assert(bt_tolower('N') == 'n');
	cr_assert(bt_tolower('Z') == 'z');
	cr_assert(bt_tolower('a') == 'a');
	cr_assert(bt_tolower('!') == '!');
	cr_assert(bt_tolower('\0') == '\0');
}

Test(ctype, toupper)
{
	cr_assert(bt_toupper('a') == 'A');
	cr_assert(bt_toupper('n') == 'N');
	cr_assert(bt_toupper('z') == 'Z');
	cr_assert(bt_toupper('A') == 'A');
	cr_assert(bt_toupper('!') == '!');
	cr_assert(bt_toupper('\0') == '\0');
}
