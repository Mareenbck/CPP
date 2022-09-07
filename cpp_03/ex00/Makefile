NAME	=	a.out
SRCS	=	srcs/main.cpp srcs/ClapTrap.cpp
OBJS	=	${SRCS:.cpp=.o}
DEPENDS = 	$(OBJS:.o=.d)
CXX		=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
HEADER 	=	includes

all:		${NAME}

%.o:		%.cpp
	${CXX} ${CXXFLAGS} -I${HEADER} -MMD -MP -c $< -o $@

-include $(DEPENDS)

${NAME}:	${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean:
	rm -f ${OBJS} $(DEPENDS)

fclean: clean
	rm -f ${NAME}

re : fclean all

.PHONY: all fclean clean re
