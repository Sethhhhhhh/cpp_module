NAME		=	sed

CC			=	clang++ 

HEADER		=	./includes

FLAGS		=	-W -Wall -Werror -I $(HEADER)

SRCS		=	main.cpp \

OBJS		=	$(SRCS:.cpp=.o)

.cpp.o 		:	
				$(CC) $(FLAGS) -c $<

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean		:
				rm -rf $(OBJS)

fclean		:	clean
				rm $(NAME)

re			:	fclean all

