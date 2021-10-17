# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ufitzhug <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/10 15:48:42 by ufitzhug          #+#    #+#              #
#    Updated: 2021/10/10 17:30:30 by ufitzhug         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c

B_SRC = ft_substr.c
#
HEADER = libft.h
OBJ = $(patsubst %.c, %.o, $(SRC))
B_OBJ = $(B_SRC:%.c=%.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(HEADER)
#
.PHONY : all clean fclean re bonus
#
all : $(NAME)
#
$(NAME) : $(OBJ) $(HEADER)
	ar rcs $(NAME) $?
#
%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

bonus : 
	@make OBJ="$(B_OBJ)" all

clean : 
	@rm -f $(OBJ) $(B_OBJ)

fclean :
	@$(RM) $(NAME)

re : fclean all
