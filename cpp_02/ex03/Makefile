NAME	=	a.out
SRCS	=	srcs/main.cpp srcs/Fixed.cpp srcs/Point.cpp srcs/bsp.cpp
OBJS	=	${SRCS:.cpp=.o}
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
HEADER 	=	includes

all:		${NAME}

%.o:		%.cpp
	${CC} ${CFLAGS} -I${HEADER} -c $< -o $@


${NAME}:	${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re : fclean all

.PHONY: all fclean clean re
