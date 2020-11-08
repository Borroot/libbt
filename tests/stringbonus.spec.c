#include <criterion/criterion.h>
#include <stddef.h>
#include <bt_ctype.h>
#include <bt_stdlib.h>
#include <bt_string.h>

Test(string_bonus, memalloc)
{
	char *src = bt_memalloc(100);

	for (int i = 0; i < 100; i++) {
		cr_assert_eq(src[i], '\0');
	}
	free(src);
}

Test(string_bonus, memdel)
{
	void *src = bt_memalloc(100);
	bt_memdel(&src);
	cr_assert_null(src);
}

Test(string_bonus, strnew)
{
	char *src = bt_strnew(100);

	for (int i = 0; i < 100; i++) {
		cr_assert_eq(src[i], '\0');
	}
	free(src);
}

Test(string_bonus, strdel)
{
	char *src = bt_strnew(100);
	bt_strdel(&src);
	cr_assert_null(src);
}

Test(string_bonus, strclr)
{
	char s[] = "hello world";
	bt_strclr(s);
	for (int i = 0; i < (int)sizeof s; i++) {
		cr_assert_eq(s[i], '\0');
	}
}

void tmp1_tolower(char *c) { *c = (char)bt_tolower((int)*c); }
void tmp1_toupper(char *c) { *c = (char)bt_toupper((int)*c); }

Test(string_bonus, striter)
{
	char s1[] = "hello world";
	char s2[] = "hello, world! :)";

	bt_striter(s1, tmp1_toupper);
	cr_assert_str_eq(s1, "HELLO WORLD");

	bt_striter(s1, tmp1_tolower);
	cr_assert_str_eq(s1, "hello world");

	bt_striter(s1, tmp1_tolower);
	cr_assert_str_eq(s1, "hello world");

	bt_striter(s2, tmp1_toupper);
	cr_assert_str_eq(s2, "HELLO, WORLD! :)");
}

void tmp2_toupper(unsigned int i, char *c)
{ *c = i < 5 ? (char)bt_toupper((int)*c) : *c; }

Test(string_bonus, striteri)
{
	char s[] = "hello world";

	bt_striteri(s, tmp2_toupper);
	cr_assert_str_eq(s, "HELLO world");
}

Test(string_bonus, strmap)
{
	char *result1 = bt_strmap("HELLO WORLD", bt_tolower_chars);
	cr_assert_str_eq(result1, "hello world");

	char *result2 = bt_strmap("hello world", bt_toupper_chars);
	cr_assert_str_eq(result2, "HELLO WORLD");

	char *result3 = bt_strmap("hello, world! :)", bt_toupper_chars);
	cr_assert_str_eq(result3, "HELLO, WORLD! :)");

	bt_freeall(3, result1, result2, result3);
}

char tmp4_toupper(unsigned int i, char c)
{ return i < 5 ? (char)bt_toupper((int)c) : c; }

Test(string_bonus, strmapi)
{
	char *result1 = bt_strmapi("hello world", tmp4_toupper);
	cr_assert_str_eq(result1, "HELLO world");

	free(result1);
}

Test(string_bonus, strequ)
{
	cr_assert_eq(bt_strequ("", ""), 1);
	cr_assert_eq(bt_strequ("hello world", "hello world"), 1);
	cr_assert_eq(bt_strequ("hello worlD", "hello world"), 0);
}

Test(string_bonus, strnequ)
{
	cr_assert_eq(bt_strnequ("", "", 1), 1);
	cr_assert_eq(bt_strnequ("", "", 0), 1);
	cr_assert_eq(bt_strnequ("hello world", "hello world", 11), 1);
	cr_assert_eq(bt_strnequ("hello worlD", "hello world", 11), 0);
	cr_assert_eq(bt_strnequ("hello worlD", "hello world", 10), 1);
}

Test(string_bonus, strsub)
{
	const char s[] = "hello world";

	char *result1 = bt_strsub(s, 6, 5);
	cr_assert_str_eq(result1, "world");

	char *result2 = bt_strsub(s, 6, 4);
	cr_assert_str_eq(result2, "worl");

	char *result3 = bt_strsub(s, 6, 0);
	cr_assert_str_eq(result3, "");

	char *result4 = bt_strsub(s, 0, 11);
	cr_assert_str_eq(result4, "hello world");

	bt_freeall(4, result1, result2, result3, result4);
}

Test(string_bonus, strjoin)
{
	char *result1 = bt_strjoin("hello ", "world");
	cr_assert_str_eq(result1, "hello world");

	char *result2 = bt_strjoin("", "hello");
	cr_assert_str_eq(result2, "hello");

	char *result3 = bt_strjoin("hello", "");
	cr_assert_str_eq(result3, "hello");

	bt_freeall(3, result1, result2, result3);
}

Test(string_bonus, strsplit)
{
	char **r1 = bt_strsplit("*hello*world***!!!!*", '*');
	cr_assert_str_eq(r1[0], "hello");
	cr_assert_str_eq(r1[1], "world");
	cr_assert_str_eq(r1[2], "!!!!");

	char **r2 = bt_strsplit("hello*world***!!!!*", '*');
	cr_assert_str_eq(r2[0], "hello");
	cr_assert_str_eq(r2[1], "world");
	cr_assert_str_eq(r2[2], "!!!!");

	char **r3 = bt_strsplit("*hello*world***!!!!", '*');
	cr_assert_str_eq(r3[0], "hello");
	cr_assert_str_eq(r3[1], "world");
	cr_assert_str_eq(r3[2], "!!!!");

	char **r4 = bt_strsplit("*****hello*world***!!!!", '*');
	cr_assert_str_eq(r4[0], "hello");
	cr_assert_str_eq(r4[1], "world");
	cr_assert_str_eq(r4[2], "!!!!");

	char **r5 = bt_strsplit("hello world", '*');
	cr_assert_str_eq(r5[0], "hello world");

	char **r6 = bt_strsplit("", '*');
	cr_assert_str_eq(r6[0], "");

	bt_freeall(6, r1, r2, r3, r4, r5, r6);
}
