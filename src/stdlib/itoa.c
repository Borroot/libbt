#include <stddef.h>
#include <stdlib.h>

char *bt_itoa(int n)
{
	char minus = n < 0 ? 1 : 0;
	size_t len = 0;

	for (int tmp = n; tmp != 0; tmp /= 10, len++)
		;
	len = n == 0 ? 1 : len + minus;

	char *s = (char *)malloc(len + 1);
	if (s != NULL) {
		if (minus)
			s[0] = '-';
		else
			n *= -1;

		for (size_t i = 0; i < len - minus; n /= 10, i++) {
			char digit = -1 * (n % 10);
			s[len - i - 1] = digit + '0';
		}
		s[len] = '\0';
	}
	return s;
}
