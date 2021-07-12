SRCS	= replace.cpp
OBJS	= $(SRCS:.cpp=.o)

CC		= clang++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

NAME	= replace

%.o:	%.cpp
		$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

all:	$(NAME)

$(NAME):$(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

re:		fclean $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)
		rm -rf *.REPLACE
