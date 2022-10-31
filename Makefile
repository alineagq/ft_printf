# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 19:18:13 by aqueiroz          #+#    #+#              #
#    Updated: 2022/10/31 19:59:02 by aqueiroz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

PATH_SRC = ./srcs/
PATH_OBJ = objs/
PATH_INCLUDE =./includes/
GCCFLAGS = -Wall -Wextra -Werror

SRC_FILES = ft_printchar ft_printf_utils ft_printf ft_printhex ft_printnbr ft_printstr ft_printunbr ft_printptr

SRCS = $(addprefix $(PATH_SRC), $(addsuffix .c, $(SRC_FILES)))
OBJS = $(addsuffix .o, $(SRC_FILES))

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	cc -I $(PATH_INCLUDE) -c $< -o $(PATH_OBJ)$@
	
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
