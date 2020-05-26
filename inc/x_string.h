#ifndef X_STRING_H
#define X_STRING_H

void    *x_memccpy(void *, const void *, int, size_t);
void    *x_memchr(const void *, int, size_t);
int      x_memcmp(const void *, const void *, size_t);
void    *x_memcpy(void *, const void *, size_t);
void    *x_memmove(void *, const void *, size_t);
void    *x_memset(void *, int, size_t);

void    *x_memalloc(size_t);
void     x_memdel(void *);

char    *stpcpy(char *, const char*);
char    *stpncpy(char *, const char *, size_t);
char    *strcat(char *, const char *);
char    *strncat(char *, const char *, size_t);
char    *strchr(const char *, int);
char    *strrchr(const char *, int);
int      strcmp(const char *, const char *);
int      strncmp(const char *, const char *, size_t);
char    *strcpy(char *, const char *);
char    *strncpy(char *, const char *, size_t);
size_t   strspn(const char *, const char *);
size_t   strcspn(const char *, const char *);
char    *strdup(const char *);
char    *strndup(const char *, size_t);
size_t   strlen(const char *);
size_t   strnlen(const char *, size_t);
char    *strpbrk(const char *, const char *);
char    *strstr(const char *, const char *);

char    *strnew(size_t);
void     strdel(char *);
void     strclr(char *);
void     striter(char *, void (*)(char *));
char    *strmap(const char *, char (*)(char));
int      strequ(const char *, const char *);
int      strnequ(const char *, const char *, size_t);
char    *strsub(const char *, unsigned int, size_t);
char    *strjoin(const char *, const char *);
char    *strtrim(const char *);
char   **strsplit(const char *, const char);

#endif
