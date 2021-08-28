NAME		=	array

CC			=	clang++ 

HEADER		=	.

FLAGS		=	-Wall -Wextra -Werror -I $(HEADER) -std=c++98

SRCS		=	main.cpp \

OBJS		=	$(SRCS:.cpp=.o)

.cpp.o 		:	
				$(CC) $(FLAGS) -c $<

all			:	$(NAME)

$(NAME)		:	$(OBJS) $(HEADER)
				$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean		:
				rm -rf $(OBJS)

fclean		:	clean
				rm $(NAME)

re			:	fclean all
