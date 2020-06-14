#ifndef BT_STDIO_H_
#define BT_STDIO_H_

void bt_putchar_fd(char, int);
void bt_putstr_fd(const char *, int);
void bt_putendl_fd(const char *, int);
void bt_putnbr_fd(int, int);

#define bt_putchar(c) bt_putchar_fd(c, 1)
#define bt_putstr(s)  bt_putstr_fd(s, 1)
#define bt_putendl(s) bt_putendl_fd(s, 1)
#define bt_putnbr(n)  bt_putnbr_fd(n, 1)

#endif /* BT_STDIO_H_ */
