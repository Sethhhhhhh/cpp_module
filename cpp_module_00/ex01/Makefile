NAME		=	phonebook

CC			=	g++ 

CFLAGS		=	-Wall -Wextra -Werror

SRCS		=	main.cpp \
				class/Contact/Contact.cpp \

OBJS		=	$(SRCS:.cpp=.o)

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean		:
				rm -rf $(OBJS)

fclean		:	clean
				rm $(NAME)

re			:	fclean all