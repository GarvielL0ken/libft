# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/14 14:00:05 by jsarkis           #+#    #+#              #
#    Updated: 2019/06/14 15:29:25 by jsarkis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	gcc main.c -L./libft -lft

atoi_11: all
	./a.out atoi "++876"

atoi_17: all
	./a.out atoi "       32 "

atoi_18: all
	./a.out atoi test_18

atoi_27: all
	./a.out atoi "+-1"

atoi_30: all
	./a.out atoi test_30
