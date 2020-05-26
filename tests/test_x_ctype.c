#include <criterion/criterion.h>
#include <x_ctype.h>

Test(ctype, isalnum)
{
	cr_assert(x_isalnum('a'));
	cr_assert(x_isalnum('A'));
	cr_assert(x_isalnum('0'));
	cr_assert(x_isalnum('9'));
	cr_assert(!x_isalnum('!'));
	cr_assert(!x_isalnum('\0'));
}

Test(ctype, isalpha)
{
	cr_assert(x_isalpha('a'));
	cr_assert(x_isalpha('n'));
	cr_assert(x_isalpha('z'));
	cr_assert(x_isalpha('A'));
	cr_assert(x_isalpha('N'));
	cr_assert(x_isalpha('Z'));
	cr_assert(!x_isalpha('1'));
	cr_assert(!x_isalpha('!'));
	cr_assert(!x_isalpha('\0'));
}

Test(ctype, isascii)
{
	cr_assert(x_isascii('\0'));
	cr_assert(x_isascii('0'));
	cr_assert(x_isascii('a'));
	cr_assert(x_isascii('A'));
	cr_assert(x_isascii('!'));
	cr_assert(x_isascii('@'));
	cr_assert(x_isascii(0));
	cr_assert(x_isascii(127));
	cr_assert(!x_isascii(-1));
	cr_assert(!x_isascii(128));
}

Test(ctype, isblank)
{
	cr_assert(x_isblank(' '));
	cr_assert(x_isblank('\t'));
	cr_assert(!x_isblank('\n'));
	cr_assert(!x_isblank('\r'));
	cr_assert(!x_isblank('\0'));
}

Test(ctype, iscntrl)
{
	cr_assert(x_iscntrl('\0'));
	cr_assert(x_iscntrl('\t'));
	cr_assert(x_iscntrl('\n'));
	cr_assert(x_iscntrl('\r'));
	cr_assert(x_iscntrl(0));
	cr_assert(x_iscntrl(31));
	cr_assert(x_iscntrl(127));
	cr_assert(!x_iscntrl(32));
	cr_assert(!x_iscntrl(126));
}

Test(ctype, isdigit)
{
	cr_assert(x_isdigit('0'));
	cr_assert(x_isdigit('5'));
	cr_assert(x_isdigit('9'));
	cr_assert(!x_isdigit('a'));
	cr_assert(!x_isdigit('!'));
	cr_assert(!x_isdigit('\0'));
}

Test(ctype, isgraph)
{
	cr_assert(x_isgraph('0'));
	cr_assert(x_isgraph('a'));
	cr_assert(x_isgraph('A'));
	cr_assert(x_isgraph('!'));
	cr_assert(x_isgraph('~'));
	cr_assert(x_isgraph('\''));
	cr_assert(!x_isgraph(' '));
	cr_assert(!x_isgraph(127));
	cr_assert(!x_isgraph('\0'));
	cr_assert(!x_isgraph('\r'));
	cr_assert(!x_isgraph('\n'));
}

Test(ctype, islower)
{
	cr_assert(x_islower('a'));
	cr_assert(x_islower('n'));
	cr_assert(x_islower('z'));
	cr_assert(!x_islower('A'));
	cr_assert(!x_islower('Z'));
	cr_assert(!x_islower('!'));
	cr_assert(!x_islower('\0'));
}

Test(ctype, isprint)
{
	cr_assert(x_isprint('0'));
	cr_assert(x_isprint('a'));
	cr_assert(x_isprint('A'));
	cr_assert(x_isprint('!'));
	cr_assert(x_isprint(' '));
	cr_assert(x_isprint('~'));
	cr_assert(x_isprint('\''));
	cr_assert(!x_isprint(127));
	cr_assert(!x_isprint('\0'));
	cr_assert(!x_isprint('\r'));
	cr_assert(!x_isprint('\n'));
}

Test(ctype, isupper)
{
	cr_assert(x_isupper('A'));
	cr_assert(x_isupper('N'));
	cr_assert(x_isupper('Z'));
	cr_assert(!x_isupper('a'));
	cr_assert(!x_isupper('z'));
	cr_assert(!x_isupper('!'));
	cr_assert(!x_isupper('\0'));
}

Test(ctype, isspace)
{
	cr_assert(x_isspace(' '));
	cr_assert(x_isspace('\t'));
	cr_assert(x_isspace('\f'));
	cr_assert(x_isspace('\n'));
	cr_assert(x_isspace('\r'));
	cr_assert(x_isspace('\v'));
	cr_assert(!x_isspace('a'));
	cr_assert(!x_isspace('0'));
	cr_assert(!x_isspace('!'));
	cr_assert(!x_isspace('\0'));
}

Test(ctype, isxdigit)
{
	cr_assert(x_isxdigit('0'));
	cr_assert(x_isxdigit('5'));
	cr_assert(x_isxdigit('9'));
	cr_assert(x_isxdigit('a'));
	cr_assert(x_isxdigit('f'));
	cr_assert(x_isxdigit('A'));
	cr_assert(x_isxdigit('F'));
	cr_assert(!x_isxdigit('g'));
	cr_assert(!x_isxdigit('\0'));
}
