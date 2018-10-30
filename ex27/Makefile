# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ofedoryc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/04 20:51:04 by ofedoryc          #+#    #+#              #
#    Updated: 2018/04/04 20:51:23 by ofedoryc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = srcs/main.c srcs/put_stroka.c

OBJS = main.o put_stroka.o

all: $(NAME)

$(NAME): bin
	gcc -o $(NAME) $(OBJS)

bin:
	gcc -c $(SRCS) -I includes

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)
	
re: fclean all
