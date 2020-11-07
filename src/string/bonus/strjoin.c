#include <stddef.h>
#include <stdlib.h>
#include "bt_string.h"

char *bt_strjoin(const char *s1, const char *s2)
{
	size_t len1 = bt_strlen(s1);
	size_t len2 = bt_strlen(s2);
	char *s3 = (char *)malloc(len1 + len2 + 1);

	if (s3 != NULL) {
		size_t i;
		for (i = 0; i < len1; i++)
			s3[i] = s1[i];
		for ( ; i < len1 + len2; i++)
			s3[i] = s2[i - len1];
		s3[len1 + len2] = '\0';
	}
	return s3;
}
