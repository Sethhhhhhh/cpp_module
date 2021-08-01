NAME		=	scavtrap

CC			=	clang++

INC_DIR		=	.

CPPFLAGS	=	-W -Wall -Werror

SRCS		=	main.cpp \
				ClapTrap.cpp \
				ScavTrap.cpp \

OBJS		=	$(SRCS:.cpp=.o)

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean		:
				rm -rf $(OBJS)


fclean		:	clean
				rm $(NAME)

re			:	fclean all

