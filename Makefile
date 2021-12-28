NAME 	=	libftprintf.a
HEADER	=	ft_printf.h

SRC		=   ft_printf.c \
			./sourses/ft_get_len.c ./sourses/ft_print_hex.c ./sourses/ft_print_percent.c ./sourses/ft_print_unsigned_itoa.c \
			./sourses/ft_putstr.c ./sourses/ft_get_point.c ./sourses/ft_print_itoa.c ./sourses/ft_print_pointer.c ./sourses/ft_putchr.c

OBJS	=	$(SRC:.c=.o)

CC		=	gcc
CFLAGS	=	$(CC) -Wall -Wextra -Werror -I./$(HEADER)

RM		=	rm -f

%.o : %.c $(HEADER)
	 $(CFLAGS) -c $< -o $@

all		: 	$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean	:	clean
	@$(RM) $(NAME)

re		: fclean all

.PHONY	:	all clean fclean re