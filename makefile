NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_memset.c ft_strlen.c \
ft_substr.c ft_strjoin.c ft_isalnum.c ft_isalpha.c ft_memchr.c ft_memcpy.c \
ft_memcmp.c ft_strdup.c ft_memmove.c ft_isdigit.c ft_isascii.c \
ft_isprint.c ft_strtrim.c ft_strchr.c ft_striteri.c ft_strmapi.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
ft_toupper.c ft_tolower.c ft_strnstr.c ft_strlcat.c ft_strlcpy.c \
ft_itoa.c ft_strrchr.c ft_strncmp.c ft_split.c

B_SRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
ft_lstiter_bonus.c ft_lstmap_bonus.c

HEADER = libft.h
OBJ = $(patsubst %.c, %.o, $(SRC))
B_OBJ = $(B_SRC:%.c=%.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(HEADER)

.PHONY : all clean fclean re bonus

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	ar rcs $(NAME) $?

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

bonus : $(B_OBJ) $(HEADER)
	ar rcs $(NAME) $?

clean :
	@rm -f $(OBJ) $(B_OBJ)

fclean : clean
	@$(RM) $(NAME)

re : fclean all
