#ifndef BT_STRING_H_
#define BT_STRING_H_

void    *bt_memset(void *, int, size_t);
int      bt_memcmp(const void *, const void *, size_t);
void    *bt_memchr(const void *, int, size_t);
void    *bt_memrchr(const void *, int, size_t);
void    *bt_memmove(void *, const void *, size_t);
void    *bt_memcpy(void *, const void *, size_t);
void    *bt_memccpy(void *, const void *, int, size_t);

void    *bt_memalloc(size_t);
void     bt_memdel(void **);

size_t   bt_strlen(const char *);
size_t   bt_strnlen(const char *, size_t);
char    *bt_strcpy(char *, const char *);
char    *bt_strncpy(char *, const char *, size_t);
char    *bt_stpcpy(char *, const char *);
char    *bt_stpncpy(char *, const char *, size_t);
char    *bt_strcat(char *, const char *);
char    *bt_strncat(char *, const char *, size_t);
char    *bt_strchr(const char *, int);
char    *bt_strrchr(const char *, int);
char    *bt_strchrnul(const char *, int);
int      bt_strcmp(const char *, const char *);
int      bt_strncmp(const char *, const char *, size_t);
char    *bt_strdup(const char *);
char    *bt_strndup(const char *, size_t);
char    *bt_strpbrk(const char *, const char *);
char    *bt_strstr(const char *, const char *);
char    *bt_strcasestr(const char *, const char *);
size_t   bt_strspn(const char *, const char *);
size_t   bt_strcspn(const char *, const char *);

//char    *bt_strnew(size_t);
//void     bt_strdel(char *);
void     bt_strclr(char *);
void     bt_striter(char *, void (*)(char *));
char    *bt_strmap(const char *, char (*)(char));
int      bt_strequ(const char *, const char *);
int      bt_strnequ(const char *, const char *, size_t);
//char    *bt_strsub(const char *, unsigned int, size_t);
//char    *bt_strjoin(const char *, const char *);
//char    *bt_strtrim(const char *);
//char   **bt_strsplit(const char *, const char);

#endif /* BT_STRING_H_ */