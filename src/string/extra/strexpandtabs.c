#include <stddef.h>
#include <stdlib.h>
#include "bt_string.h"

char *bt_strexpandtabs(const char *s, size_t n)
{
	int num_tabs = 0;
	size_t i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == '\t')
			num_tabs++;

	int len = i - num_tabs + num_tabs * n;
	char *new = (char *)malloc(sizeof(char) * (len + 1));
	if (new != NULL) {
		for (size_t j = 0, i = 0; s[i] != '\0'; j++, i++) {
			if (s[i] != '\t')
				new[j] = s[i];
			else {
				for (size_t k = 0; k < n; k++, j++)
					new[j] = ' ';
				j--;
			}
		}
		new[len] = '\0';
	}
	return new;
}
