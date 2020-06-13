#include <criterion/criterion.h>
#include <bt_stdlib.h>

Test(stdlib, itoa)
{
	cr_assert_str_eq(bt_itoa( 0), "0");
	cr_assert_str_eq(bt_itoa(-0), "0");
	cr_assert_str_eq(bt_itoa( 1), "1");
	cr_assert_str_eq(bt_itoa(-1), "-1");
	cr_assert_str_eq(bt_itoa( 1234567890), "1234567890");
	cr_assert_str_eq(bt_itoa(-1234567890), "-1234567890");
}
