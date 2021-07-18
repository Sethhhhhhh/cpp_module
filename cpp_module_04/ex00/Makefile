NAME		=	polymorphism

CC			=	clang++

INC_DIR		=	.

CFLAGS		=	-g -Wall -Wextra -Werror -std=c++98 -Wno-shadow -Wshadow $(addprefix -I , $(INC_DIR))

SRCS		=	main.cpp \
				Animal.cpp \
				Dog.cpp \
				Cat.cpp \
				WrongAnimal.cpp \
				WrongCat.cpp \

OBJS		=	$(SRCS:.cpp=.o)

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean		:
				rm -rf $(OBJS)


fclean		:	clean
				rm $(NAME)

re			:	fclean all
