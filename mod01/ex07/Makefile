# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/21 17:13:42 by pramella          #+#    #+#              #
#    Updated: 2020/06/23 16:34:48 by pramella         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	= replace.cpp
OBJS	= $(SRCS:.cpp=.o)

CC		= clang++
CFLAGS	= -Wall -Wextra -Werror

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
