#ifndef X_STRING_H
#define X_STRING_H

void    *x_memset(void *, int, size_t);
int      x_memcmp(const void *, const void *, size_t);
void    *x_memchr(const void *, int, size_t);
void    *x_memrchr(const void *, int, size_t);
//void    *x_memmove(void *, const void *, size_t);
//void    *x_memcpy(void *, const void *, size_t);
//void    *x_memccpy(void *, const void *, int, size_t);

//void    *x_memalloc(size_t);
//void     x_memdel(void *);

size_t   x_strlen(const char *);
size_t   x_strnlen(const char *, size_t);
char    *x_strcpy(char *, const char *);
char    *x_strncpy(char *, const char *, size_t);
char    *x_stpcpy(char *, const char *);
char    *x_stpncpy(char *, const char *, size_t);
char    *x_strcat(char *, const char *);
char    *x_strncat(char *, const char *, size_t);
char    *x_strchr(const char *, int);
char    *x_strrchr(const char *, int);
char    *x_strchrnul(const char *, int);
int      x_strcmp(const char *, const char *);
int      x_strncmp(const char *, const char *, size_t);
char    *x_strdup(const char *);
char    *x_strndup(const char *, size_t);
char    *x_strpbrk(const char *, const char *);
char    *x_strstr(const char *, const char *);
char    *x_strcasestr(const char *, const char *);
size_t   x_strspn(const char *, const char *);
size_t   x_strcspn(const char *, const char *);

//char    *x_strnew(size_t);
//void     x_strdel(char *);
void     x_strclr(char *);
void     x_striter(char *, void (*)(char *));
char    *x_strmap(const char *, char (*)(char));
int      x_strequ(const char *, const char *);
int      x_strnequ(const char *, const char *, size_t);
//char    *x_strsub(const char *, unsigned int, size_t);
//char    *x_strjoin(const char *, const char *);
//char    *x_strtrim(const char *);
//char   **x_strsplit(const char *, const char);

#endif
