#include <criterion/criterion.h>
#include <x_string.h>

Test(string, strlen)
{
	char *s = "hello world";
	cr_assert(x_strlen(s) == 11);
	s = "hello\0world";
	cr_assert(x_strlen(s) == 5);
	s = "";
	cr_assert(x_strlen(s) == 0);
}

Test(string, strnlen)
{
	char *s = "hello world";
	cr_assert(x_strnlen(s, 20) == 11);
	s = "hello\0world";
	cr_assert(x_strnlen(s, 20) == 5);
	s = "";
	cr_assert(x_strnlen(s, 20) == 0);

	s = "hello world";
	cr_assert(x_strnlen(s, 8) == 8);
	s = "hello\0world";
	cr_assert(x_strnlen(s, 8) == 5);
	s = "";
	cr_assert(x_strnlen(s, 0) == 0);
}
