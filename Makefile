SRCS = ft_printf.c ft_putchar_printf.c ft_putnbr_base_printf.c \
	ft_putnbr_printf.c ft_putptr_printf.c ft_putstr_printf.c \
	ft_putstr.c ft_putunsignednbr_printf.c
OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a
LIBC = ar rcs
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS} ${OBJSB}

fclean: clean
	${RM} ${NAME} ${bonus} 

re: fclean all

.PHONY : all bonus clean fclean re
