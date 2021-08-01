NAME		=	interface_recap

CC			=	clang++

INC_DIR		=	.

CPPFLAGS	=	-W -Wall -Werrorw

SRCS		=	main.cpp \
				AMateria.cpp \
				Ice.cpp \
				Cure.cpp \
				Character.cpp \
				MateriaSource.cpp \
 
OBJS		=	$(SRCS:.cpp=.o)

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean		:
				rm -rf $(OBJS)


fclean		:	clean
				rm $(NAME)

re			:	fclean all
