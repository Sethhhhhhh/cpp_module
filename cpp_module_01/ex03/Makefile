NAME		=	abuse

CC			=	clang++

INC_DIR		=	.

CFLAGS		=	-g -Wall -Wextra -Werror -std=c++98  $(addprefix -I , $(INC_DIR))

SRCS		=	main.cpp \
				Weapon.cpp \
				HumanA.cpp \
				HumanB.cpp \

OBJS		=	$(SRCS:.cpp=.o)

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean		:
				rm -rf $(OBJS)

fclean		:	clean
				rm $(NAME)

re			:	fclean all
