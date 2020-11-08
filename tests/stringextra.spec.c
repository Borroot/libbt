#include <criterion/criterion.h>
#include <stddef.h>
#include <bt_ctype.h>
#include <bt_stdlib.h>
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

Test(string_extra, stristitle)
{
	cr_assert(bt_stristitle("Hello World"));
	cr_assert(bt_stristitle(""));
	cr_assert(bt_stristitle("Hello\tWorld"));
	cr_assert(bt_stristitle("Hello\nWorld"));
	cr_assert(bt_stristitle("Hello World\n"));
	cr_assert(bt_stristitle("1hello World"));
	cr_assert(bt_stristitle("1 2 3 H"));
	cr_assert_not(bt_stristitle("HEllo World"));
	cr_assert_not(bt_stristitle("hEllo World"));
	cr_assert_not(bt_stristitle("Hello world"));
	cr_assert_not(bt_stristitle("hello world"));
	cr_assert_not(bt_stristitle("hELlo wOrLd"));
	cr_assert_not(bt_stristitle("HelloWorld"));
	cr_assert_not(bt_stristitle("1Hello World"));
}

Test(string_extra, strtotitle)
{
	char s1[] = "Hello World";
	cr_assert_str_eq(bt_strtotitle(s1), "Hello World");
	char s2[] = "HelloWorld";
	cr_assert_str_eq(bt_strtotitle(s2), "Helloworld");
	char s3[] = "1Hello World";
	cr_assert_str_eq(bt_strtotitle(s3), "1hello World");
	char s4[] = "hELlo worlD";
	cr_assert_str_eq(bt_strtotitle(s4), "Hello World");
	char s5[] = "1 2 3 h";
	cr_assert_str_eq(bt_strtotitle(s5), "1 2 3 H");
	char s6[] = "Hello\tWorld";
	cr_assert_str_eq(bt_strtotitle(s6), "Hello\tWorld");
	char s7[] = "";
	cr_assert_str_eq(bt_strtotitle(s7), "");
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

Test(string_extra, strcapital)
{
	char s1[] = "hello";
	cr_assert_str_eq(bt_strcapital(s1), "Hello");
	char s2[] = "";
	cr_assert_str_eq(bt_strcapital(s2), "");
	char s3[] = "1hi";
	cr_assert_str_eq(bt_strcapital(s3), "1hi");
	char s4[] = " hi";
	cr_assert_str_eq(bt_strcapital(s4), " hi");
	char s5[] = "\thi";
	cr_assert_str_eq(bt_strcapital(s5), "\thi");
	char s6[] = "HI";
	cr_assert_str_eq(bt_strcapital(s6), "HI");
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

Test(string_extra, expandtabs)
{
	char *r1 = bt_strexpandtabs("\t", 0);
	cr_assert_str_eq(r1, "");
	char *r2 = bt_strexpandtabs("\t", 1);
	cr_assert_str_eq(r2, " ");
	char *r3 = bt_strexpandtabs("\t", 15);
	cr_assert_str_eq(r3, "               ");
	char *r4 = bt_strexpandtabs("hello", 6);
	cr_assert_str_eq(r4, "hello");
	char *r5 = bt_strexpandtabs("hello\tworld", 4);
	cr_assert_str_eq(r5, "hello    world");
	char *r6 = bt_strexpandtabs("\ta\t\tb\t\t", 2);
	cr_assert_str_eq(r6, "  a    b    ");
	char *r7 = bt_strexpandtabs("\ta\tb\t\t", 0);
	cr_assert_str_eq(r7, "ab");

	bt_freeall(7, r1, r2, r3, r4, r5, r6, r7);
}

Test(string_extra, strcenter)
{
	char *r1 = bt_strcenter("hello", 0);
	cr_assert_str_eq(r1, "hello");
	char *r2 = bt_strcenter("hello", 3);
	cr_assert_str_eq(r2, "hello");
	char *r3 = bt_strcenter("hello", 5);
	cr_assert_str_eq(r3, "hello");
	char *r4 = bt_strcenter("hello", 6);
	cr_assert_str_eq(r4, "hello ");
	char *r5 = bt_strcenter(" hello ", 7);
	cr_assert_str_eq(r5, " hello ");
	char *r6 = bt_strcenter("hello world", 15);
	cr_assert_str_eq(r6, "  hello world  ");
	char *r7 = bt_strcenter("hello", 10);
	cr_assert_str_eq(r7, "  hello   ");

	bt_freeall(7, r1, r2, r3, r4, r5, r6, r7);
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

	bt_freeall(5, result1, result2, result3, result4, result5);
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

	bt_freeall(5, result1, result2, result3, result4, result5);
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

	bt_freeall(5, result1, result2, result3, result4, result5);
}
