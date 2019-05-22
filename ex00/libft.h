/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:46:44 by jsarkis           #+#    #+#             */
/*   Updated: 2019/05/22 19:53:53 by jsarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

 void ft_memdel(void **ap);

 void ft_memmove(void *dest, const void *src, size_t n);

 void *ft_memset(void *b, int c, size_t len);

 long ft_order(long n);

 void ft_putchar(char c);

 void ft_putchar_fd(char c, int fd);

 void ft_putendl(char const *s);

 void ft_putendl_fd(char const *S, int fd);

 void ft_putnbr(int n);

 void ft_putnbr_fd(int n, int fd);

 void ft_putstr(char const *str);

 void ft_putstr_fd(char const *str, int fd);
	
 char *ft_strcat(char *restrict s1, const char *restrict s2);

 char *ft_strchr(const char *s, int c);

 void ft_strclr(char *s);

 int ft_strcmp(const char *s1, const char *s2);

 char *ft_strcpy(char *dst, const char *src);

 void ft_strdel(char **as);

 char *ft_strdup(const char *s1);

 void ft_striter(char *s, void (*f)(char *));

 void ft_striteri(char *s, void (*f)(unsigned int, char *));

 char *ft_strjoin(char const *s1, char const *s2);
 /* 
  strlcat
  */
  size_t ft_strlen(const char *str);

  char *ft_strmap(char const *s, char (*f)(char));

  char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
  /*
  strncat
  strncmp
  strncpy
  strnequ
  strnew
  strnstr
  strrchr
  strsplit
  strstr
  strsub
  strtrim
 */
 int ft_tolower(int c);

 int ft_toupper(int c);

#endif
