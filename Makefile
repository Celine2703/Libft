SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcpy.c ft_memcmp.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c ft_strjoin.c ft_strtrim.c ft_substr.c ft_putstr_fd.c ft_itoa.c ft_striteri.c ft_strmapi.c

SRCSBONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

OBJS = $(SRCS:%.c=%.o)

OBJSBONUS = $(SRCSBONUS:%.c=%.o)

CC   = gcc -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

clean:
	rm -f $(OBJS) $(OBJSBONUS)

fclean: clean
	rm -f $(NAME)

re: fclean
	make all

$(NAME): $(OBJS)
	ar -rcs libft.a $(OBJS)

bonus: $(OBJS) $(OBJSBONUS)
	ar -rcs libft.a $(OBJS) $(OBJSBONUS)

so:
	$(CC) -nostartfiles -fPIC $(SRCS) $(SRCSBONUS)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(OBJSBONUS)

%.o: %.c
	$(CC) -c $< -Iincludes -o $@

.PHONY: all bonus clean fclean re
