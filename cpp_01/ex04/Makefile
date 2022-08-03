NAME	=	filestream
SRCS	=	main.cpp
OBJS	=	${SRCS:.cpp=.o}
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

all:		${NAME}

.cpp.o	:
			$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)


${NAME}:	${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re : fclean all

.PHONY: all fclean clean re
