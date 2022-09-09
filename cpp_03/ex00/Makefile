NAME	=	ClapTrap
SRCS	=	main.cpp ClapTrap.cpp
OBJS	=	$(addprefix $(OBJDIR), ${SRCS:.cpp=.o})
DEPENDS = 	$(OBJS:.o=.d)
CXX		=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
HEADER 	=	includes
SRCDIR	= 	srcs/
OBJDIR	= 	objs/

-include $(DEPENDS)
all:		${NAME}

$(OBJDIR)%.o:	$(SRCDIR)%.cpp
	@mkdir -p $(OBJDIR)
	${CXX} ${CXXFLAGS} -I${HEADER} -MMD -MP -c $< -o $@

${NAME}:	${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean:
	rm -rf ${OBJDIR} $(DEPENDS)

fclean: clean
	rm -f ${NAME}

re : fclean all

.PHONY: all fclean clean re
