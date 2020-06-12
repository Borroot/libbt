#include <stddef.h>
#include <stdlib.h>
#include "bt_string.h"

static size_t word_count(const char *s, char c)
{
	int flag = 0;
	size_t i;

	for (i = 0; s[i] != c && s[i] != '\0'; i++)
		flag = 1;
	for ( ; s[i] == c; i++)
		;

	if (s[i] == '\0')
		return 1;
	else
		return word_count(s + i, c) + flag;
}

static void find_words(const char *s, char c, char **words, size_t count, size_t n)
{
	if (count == 0)
		return;

	size_t i;
	for (i = 0; s[i] == c; i++)
		;

	size_t len = bt_strcspn(s + i, &c);
	words[n] = bt_strndup(s + i, len);

	find_words(s + i + len, c, words, count - 1, n + 1);
}

char **bt_strsplit(const char *s, char c)
{
	size_t count = word_count(s, c);
	char **words = (char **)malloc(sizeof(char *) * count);

	find_words(s, c, words, count, 0);
	return words;
}
