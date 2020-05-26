#include <criterion/criterion.h>
#include <libx.h>
#include <ctype.h>

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
