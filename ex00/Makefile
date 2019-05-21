SRC = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c

all:
	gcc -c $(SRC)
	ar rc libft.a *.o
	gcc main.c -L. -lft

clean:
	rm *.o

fclean: clean
	rm libft.a
	rm a.*