#include <criterion/criterion.h>
#include <stddef.h>
#include <bt_ctype.h>
#include <bt_string.h>

Test(string_extra, strfunc)
{
	char s[] = "hello";
	cr_assert_str_eq(bt_strfunc(s, bt_toupper_chars), "HELLO");
	cr_assert_str_eq(bt_strfunc(s, bt_tolower_chars), "hello");
	s[3] = 'L';
	cr_assert_str_eq(bt_strfunc(s, bt_tolower_chars), "hello");
	s[3] = '1';
	cr_assert_str_eq(bt_strfunc(s, bt_toupper_chars), "HEL1O");
}

Test(string_extra, stris)
{
	cr_assert(bt_stris("hello", bt_islower_char));
	cr_assert(bt_stris("", bt_isupper_char));
	cr_assert_not(bt_stris("hellO", bt_islower_char));
	cr_assert_not(bt_stris("hello", bt_isupper_char));
}

Test(string_extra, strtoupper)
{
	char s[] = "hello";
	cr_assert_str_eq(bt_strtoupper(s), "HELLO");
	s[0] = 'h';
	cr_assert_str_eq(bt_strtoupper(s), "HELLO");
	s[0] = '3';
	cr_assert_str_eq(bt_strtoupper(s), "3ELLO");
}

Test(string_extra, strtolower)
{
	char s[] = "HELLO";
	cr_assert_str_eq(bt_strtolower(s), "hello");
	s[0] = 'H';
	cr_assert_str_eq(bt_strtolower(s), "hello");
	s[0] = '3';
	cr_assert_str_eq(bt_strtolower(s), "3ello");
}

Test(string_extra, strtocapital)
{
	char s1[] = "hello";
	cr_assert_str_eq(bt_strtocapital(s1), "Hello");

	char s2[] = "";
	cr_assert_str_eq(bt_strtocapital(s2), "");

	char s3[] = "1hi";
	cr_assert_str_eq(bt_strtocapital(s3), "1hi");

	char s4[] = " hi";
	cr_assert_str_eq(bt_strtocapital(s4), " hi");

	char s5[] = "\thi";
	cr_assert_str_eq(bt_strtocapital(s5), "\thi");

	char s6[] = "HI";
	cr_assert_str_eq(bt_strtocapital(s6), "HI");
}

Test(string_extra, strswapcase)
{
	char s1[] = "hello";
	cr_assert_str_eq(bt_strswapcase(s1), "HELLO");

	char s2[] = "";
	cr_assert_str_eq(bt_strswapcase(s2), "");

	char s3[] = "HELLO";
	cr_assert_str_eq(bt_strswapcase(s3), "hello");

	char s4[] = "123hi123";
	cr_assert_str_eq(bt_strswapcase(s4), "123HI123");

	char s5[] = "heLLoo";
	cr_assert_str_eq(bt_strswapcase(s5), "HEllOO");
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
