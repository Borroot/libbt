#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdio.h>
#include <bt_stdio.h>

void setup(void)
{
	cr_redirect_stdout();
}

Test(stdio, putchar, .init = setup)
{
	bt_putchar('a');
	bt_putchar('0');
	bt_putchar('\t');
	bt_putchar('\v');
	cr_assert_stdout_eq_str("a0\t\v");
}
