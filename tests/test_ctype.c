#include <criterion/criterion.h>
#include <x_ctype.h>
#include <ctype.h>

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
