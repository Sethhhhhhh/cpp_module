NAME		=	megaphone

CC			=	clang++ 

CPPFLAGS	=	-W -Wall -Werror

SRCS		=	megaphone.cpp

OBJS		=	$(SRCS:.cpp=.o)

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

example		:	$(NAME)
				./$(NAME) "shhhhh... I think the students are asleep..."
				./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
				./$(NAME) 

clean		:
				rm -rf $(OBJS)

fclean		:	clean
				rm $(NAME)

re			:	fclean all