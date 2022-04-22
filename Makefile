NAME ?= libft.a
CC ?= gcc
CFLAGS = -Wall -Wextra -Werror
// Fix below line
SRCS = $(shell find . -name "ft_*.c")
OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${@}

%.o: %.c
	${CC} ${CFLAGS} -c ${<} -o ${@}

re: fclean all

fclean: clean
	rm -f ${NAME}

clean:
	rm -f ${OBJS}

.PHONY: clean fclean re all