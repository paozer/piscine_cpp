SRCS	= main.cpp \
		  Serializer.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= serializer

CC		= clang++

CFLAGS	= -g3 -fsanitize=address -Wall -Werror -Wextra -Wno-conversion

RM		= rm -f

%.o: 		%.cpp
			$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean: 	clean
			$(RM) $(NAME)

re: 		fclean all

.PHONY: 	all clean fclean re
