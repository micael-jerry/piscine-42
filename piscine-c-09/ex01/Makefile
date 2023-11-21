# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfidimal <mfidimal@student.42antanana      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 14:24:46 by mfidimal          #+#    #+#              #
#    Updated: 2023/11/21 15:47:17 by mfidimal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES_DIR = ./includes
SRCS = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c
OBJS = $(SRCS:.c=.o)

all: $(EXEC)

%.o: $(SRCS)
	$(CC) $(CFLAGS) -I $(INCLUDES_DIR) -o $@ -c $<

$(EXEC): $(OBJS)
	ar rc $(EXEC) $(OBJS)
	ranlib $(EXEC)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re
