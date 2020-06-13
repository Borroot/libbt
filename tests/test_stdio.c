#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdio.h>
#include <bt_stdio.h>

void setup_stdout(void)
{
	cr_redirect_stdout();
}

void setup_stderr(void)
{
	cr_redirect_stderr();
}

Test(stdio, putchar, .init = setup_stdout)
{
	bt_putchar('a');
	bt_putchar('0');
	bt_putchar('\t');
	bt_putchar('\v');
	cr_assert_stdout_eq_str("a0\t\v");
}

Test(stdio, putstr, .init = setup_stdout)
{
	bt_putstr("a0\t\v");
	bt_putstr("hello world");
	cr_assert_stdout_eq_str("a0\t\vhello world");
}

Test(stdio, putendl, .init = setup_stdout)
{
	bt_putendl("a0\t\v");
	bt_putendl("hello world");
	cr_assert_stdout_eq_str("a0\t\v\nhello world\n");
}

Test(stdio, putnbr, .init = setup_stdout)
{
	bt_putnbr(1234567890);
	bt_putnbr(-123);
	cr_assert_stdout_eq_str("1234567890-123");
}

Test(stdio, putchar_fd, .init = setup_stderr)
{
	bt_putchar_fd('a', 2);
	bt_putchar_fd('0', 2);
	bt_putchar_fd('\t', 2);
	bt_putchar_fd('\v', 2);
	cr_assert_stderr_eq_str("a0\t\v");
}

Test(stdio, putstr_fd, .init = setup_stderr)
{
	bt_putstr_fd("a0\t\v", 2);
	bt_putstr_fd("hello world", 2);
	cr_assert_stderr_eq_str("a0\t\vhello world");
}

Test(stdio, putendl_fd, .init = setup_stderr)
{
	bt_putendl_fd("a0\t\v", 2);
	bt_putendl_fd("hello world", 2);
	cr_assert_stderr_eq_str("a0\t\v\nhello world\n");
}

Test(stdio, putnbr_fd, .init = setup_stderr)
{
	bt_putnbr_fd(1234567890, 2);
	bt_putnbr_fd(-123, 2);
	cr_assert_stderr_eq_str("1234567890-123");
}
