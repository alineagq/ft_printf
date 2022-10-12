# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 19:18:13 by aqueiroz          #+#    #+#              #
#    Updated: 2022/10/12 15:20:11 by aqueiroz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

PATH_SRC = ./srcs/
PATH_INCLUDE =./includes/
GCCFLAGS = -Wall -Wextra -Werror

SRC_FILES = ft_printchar ft_printf_utils ft_printf ft_printhex ft_printnbr ft_printstr ft_printunbr ft_printptr

SRCS = $(addprefix $(PATH_SRC), $(addsuffix .c, $(SRC_FILES)))
OBJS = $(addprefix $(PATH_SRC), $(addsuffix .o, $(SRC_FILES)))


all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	@clang -I $(PATH_INCLUDE) -c $(SRCS)
	@mv *.o ./srcs/

clean:
	@cd srcs
	@rm -f $(OBJS)
	@cd ..

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
