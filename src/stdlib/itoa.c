#include <stddef.h>
#include <stdlib.h>

char *bt_itoa(int n)
{
	int minus = n < 0 ? 1 : 0;
	int tmp = n;
	size_t len = 0;

	for ( ; tmp != 0; tmp /= 10, len++)
		;
	len = n == 0 ? 1 : len + minus;

	char *s = (char *)malloc(len + 1);
	if (s != NULL) {
		if (minus) {
			n *= -1;
			s[0] = '-';
		}
		for (size_t i = 0; i < len - minus; i++) {
			s[len - i - 1] = n % 10 + '0';
			n /= 10;
		}
		s[len] = '\0';
	}
	return s;
}
