#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

 int ft_atoi(const char *str);

 void ft_bzero(void *s, size_t n);

 int ft_isalnum(int c);

 int ft_isalpha(int c);

 int ft_isascii(int c);

 int ft_isdigit(int c);

 int ft_isprint(int c);

 char *ft_itoa(int n);

 void *ft_memalloc(size_t size);

 void *ft_memccpy(void *dest, const void *src, int c, size_t n);

 void *ft_memchr(const void *s, int c, size_t n);

 int ft_memcmp(const void *s1, const void *s2, size_t n);

 void *ft_memcpy(void *dest, const void *src, size_t n);

 void *ft_memdel(void **ap);

 void *ft_memmove(void *dest, const void *src, size_t n);

 void *ft_memset(void *b, int c, size_t len);

 int ft_order(int n);

 void ft_putchar(char c);

 void ft_putchar_fd(char c, int fd);

 void ft_putendl(char const *s);

 void ft_putendl_fd(char const *S, int fd);

 void ft_putnbr(int n);

 void ft_putnbr(int n, int fd);

 void ft_putstr(char const *str);
#endif