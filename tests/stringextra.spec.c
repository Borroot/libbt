#include <criterion/criterion.h>
#include <stddef.h>
#include <bt_ctype.h>
#include <bt_string.h>

Test(string_extra, stris)
{
	cr_assert(bt_stris("hello", bt_islower_char));
	cr_assert(bt_stris("", bt_isupper_char));
	cr_assert_not(bt_stris("hello", bt_isupper_char));
}

Test(string_extra, strstrip)
{
	char *result1 = bt_strstrip("hello world");
	cr_assert_str_eq(result1, "hello world");

	char *result2 = bt_strstrip(" \t \n  hello world");
	cr_assert_str_eq(result2, "hello world");

	char *result3 = bt_strstrip("hello world     \n");
	cr_assert_str_eq(result3, "hello world");

	char *result4 = bt_strstrip(" \t\n  hello world\n  \t\t  ");
	cr_assert_str_eq(result4, "hello world");

	char *result5 = bt_strstrip(" \t\n");
	cr_assert_str_eq(result5, "");

	free(result1);
	free(result2);
	free(result3);
	free(result4);
	free(result5);
}

Test(string_extra, strlstrip)
{
	char *result1 = bt_strlstrip("hello world");
	cr_assert_str_eq(result1, "hello world");

	char *result2 = bt_strlstrip(" \t \n  hello world");
	cr_assert_str_eq(result2, "hello world");

	char *result3 = bt_strlstrip("hello world \n");
	cr_assert_str_eq(result3, "hello world \n");

	char *result4 = bt_strlstrip(" \t\n  hello world\n \t\t ");
	cr_assert_str_eq(result4, "hello world\n \t\t ");

	char *result5 = bt_strlstrip(" \t\n");
	cr_assert_str_eq(result5, "");

	free(result1);
	free(result2);
	free(result3);
	free(result4);
	free(result5);
}

Test(string_extra, strrstrip)
{
	char *result1 = bt_strstrip("hello world");
	cr_assert_str_eq(result1, "hello world");

	char *result2 = bt_strstrip(" \t \n  hello world");
	cr_assert_str_eq(result2, "hello world");

	char *result3 = bt_strstrip("hello world     \n");
	cr_assert_str_eq(result3, "hello world");

	char *result4 = bt_strstrip(" \t\n  hello world\n  \t\t  ");
	cr_assert_str_eq(result4, "hello world");

	char *result5 = bt_strlstrip(" \t\n");
	cr_assert_str_eq(result5, "");

	free(result1);
	free(result2);
	free(result3);
	free(result4);
	free(result5);
}
