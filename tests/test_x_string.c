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
	char *result;

	char *src1 = "hello world";
	char dst1[11] = "";
	result = x_strcpy(dst1, src1);
	cr_assert_str_eq(dst1, src1);
	cr_assert_str_eq(result, dst1);

	char dst2[11] = "hi";
	result = x_strcpy(dst2, src1);
	cr_assert_str_eq(dst2, src1);
	cr_assert_str_eq(result, dst2);

	char *src2 = "";
	char dst3[11] = "hello world";
	result = x_strcpy(dst3, src2);
	cr_assert_str_eq(dst3, src2);
	cr_assert_str_eq(result, dst3);

	char *src3 = "hello w\0rld";
	char dst4[11] = "";
	result = x_strcpy(dst4, src3);
	cr_assert_str_eq(dst4, src3);
	cr_assert_str_eq(result, dst4);
}

Test(string, strncpy)
{
	char *result;

	char *src1 = "hello world";
	char dst1[11] = "";
	result = x_strncpy(dst1, src1, 11);
	cr_assert_str_eq(dst1, src1);
	cr_assert_str_eq(result, dst1);

	char dst2[11] = "hi";
	result = x_strncpy(dst2, src1, 11);
	cr_assert_str_eq(dst2, src1);
	cr_assert_str_eq(result, dst2);

	char *src2 = "";
	char dst3[11] = "hello world";
	result = x_strncpy(dst3, src2, 11);
	cr_assert_str_eq(dst3, src2);
	cr_assert_str_eq(result, dst3);

	char dst4[13] = "hi";
	result = x_strncpy(dst4, src1, 13);
	cr_assert_str_eq(dst4, src1);
	cr_assert_str_eq(result, dst4);

	char *src3 = "";
	char dst5[11] = "hello world";
	result = x_strncpy(dst5, src3, 3);
	cr_assert_str_eq(dst5, src3);
	cr_assert_str_eq(result, dst5);
}

Test(string, stpcpy)
{
	char *result;

	char *src1 = "hello world";
	char dst1[11] = "";
	result = x_stpcpy(dst1, src1);
	cr_assert_str_eq(dst1, src1);
	cr_assert_str_eq(result, dst1 + 11);

	char dst2[11] = "hi";
	result = x_stpcpy(dst2, src1);
	cr_assert_str_eq(dst2, src1);
	cr_assert_str_eq(result, dst2 + 11);

	char *src2 = "";
	char dst3[11] = "hello world";
	result = x_stpcpy(dst3, src2);
	cr_assert_str_eq(dst3, src2);
	cr_assert_str_eq(result, dst3);

	char *src3 = "hello w\0rld";
	char dst4[11] = "";
	result = x_stpcpy(dst4, src3);
	cr_assert_str_eq(dst4, src3);
	cr_assert_str_eq(result, dst4 + 7);
}

Test(string, stpncpy)
{
	char *result;

	char *src1 = "hello world";
	char dst1[11] = "";
	result = x_stpncpy(dst1, src1, 11);
	cr_assert_str_eq(dst1, src1);
	cr_assert_str_eq(result, dst1 + 11);

	char dst2[11] = "hi";
	result = x_stpncpy(dst2, src1, 11);
	cr_assert_str_eq(dst2, src1);
	cr_assert_str_eq(result, dst2 + 11);

	char *src2 = "";
	char dst3[11] = "hello world";
	result = x_stpncpy(dst3, src2, 11);
	cr_assert_str_eq(dst3, src2);
	cr_assert_str_eq(result, dst3);

	char dst4[13] = "hi";
	result = x_stpncpy(dst4, src1, 13);
	cr_assert_str_eq(dst4, src1);
	cr_assert_str_eq(result, dst4 + 11);

	char *src3 = "";
	char dst5[11] = "hello world";
	result = x_stpncpy(dst5, src3, 3);
	cr_assert_str_eq(dst5, src3);
	cr_assert_str_eq(result, dst5);
}
