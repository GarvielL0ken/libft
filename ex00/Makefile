SRC = ft_atoi.c \
	  ft_bzero.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_isprint.c \
	  ft_itoa.c \
	  ft_memalloc.c \
	  ft_memccpy.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memdel.c \
	  ft_memmove.c \
	  ft_memset.c \
	  ft_order.c \
	  ft_putchar.c \
	  ft_putchar_fd.c \
	  ft_putstr.c \
	  ft_putstr_fd.c \
	  \
	  ft_strlen.c

all: lib
	gcc main.c -L. -lft

lib:
	gcc -c $(SRC)
	ar rc libft.a *.o

clean:
	rm *.o

fclean: clean
	rm libft.a
	rm a.*
