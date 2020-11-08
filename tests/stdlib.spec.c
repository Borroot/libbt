#include <criterion/criterion.h>
#include <bt_stdlib.h>
#include <stdio.h>
#include <limits.h>

Test(stdlib, itoa)
{
	cr_assert_str_eq(bt_itoa( 0), "0");
	cr_assert_str_eq(bt_itoa(-0), "0");
	cr_assert_str_eq(bt_itoa( 1), "1");
	cr_assert_str_eq(bt_itoa(-1), "-1");
	cr_assert_str_eq(bt_itoa( 1234567890), "1234567890");
	cr_assert_str_eq(bt_itoa(-1234567890), "-1234567890");
	cr_assert_str_eq(bt_itoa(0xFF), "255");

	char s[30];
	sprintf(s, "%d", INT_MAX);
	cr_assert_str_eq(bt_itoa(INT_MAX), s);
	sprintf(s, "%d", INT_MIN);
	cr_assert_str_eq(bt_itoa(INT_MIN), s);
}

Test(stdlib, freeall)
{
	void *a = malloc(5);
	void *b = malloc(5);
	void *c = malloc(5);

	bt_freeall(3, a, b, c);
}
