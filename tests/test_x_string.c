#include <criterion/criterion.h>
#include <stdlib.h>
#include <stdio.h>
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

Test(string, strcpy)
{
	char *src1 = "hello world";
	char dst1[11] = "";
	x_strcpy(dst1, src1);
	cr_assert_str_eq(dst1, src1);

	char dst2[11] = "hi";
	x_strcpy(dst2, src1);
	cr_assert_str_eq(dst2, src1);

	char *src2 = "";
	char dst3[11] = "hello world";
	x_strcpy(dst3, src2);
	cr_assert_str_eq(dst3, src2);
}

Test(string, strncpy)
{
	char *src1 = "hello world";
	char dst1[11] = "";
	x_strncpy(dst1, src1, 11);
	cr_assert_str_eq(dst1, src1);

	char dst2[11] = "hi";
	x_strncpy(dst2, src1, 11);
	cr_assert_str_eq(dst2, src1);

	char *src2 = "";
	char dst3[11] = "hello world";
	x_strncpy(dst3, src2, 11);
	cr_assert_str_eq(dst3, src2);

	char *src3 = "hello world";
	char dst5[13] = "hi";
	x_strncpy(dst5, src3, 13);
	cr_assert_str_eq(dst5, src3);

	char *src4 = "";
	char dst6[11] = "hello world";
	x_strncpy(dst6, src4, 3);
	cr_assert_str_eq(dst6, src4);
}
