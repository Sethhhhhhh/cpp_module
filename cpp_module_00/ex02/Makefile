NAME		=	account

CC			=	clang++

CFLAGS		=	-Wall -Wextra -Werror

SRCS		=	tests.cpp \
				Account.cpp \

OBJS		=	$(SRCS:.cpp=.o)

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean		:
				rm -rf $(OBJS)

fclean		:	clean
				rm $(NAME)

re			:	fclean all
