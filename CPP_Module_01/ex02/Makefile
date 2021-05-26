# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nathan <nathan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/25 22:13:13 by nathan            #+#    #+#              #
#    Updated: 2021/05/26 21:21:44 by nathan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	Zombies

SRCS			=	Zombie.cpp\
					ZombieEvent.cpp\
					main.cpp

OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 -I.

OS = $(shell uname -s)
ifeq ($(OS), Linux)
	TICK = \342\234\224
	RE = \342\231\272
	TRASH = \360\237\227\221
else
	TICK = \xE2\x9C\x94
	RE = \xE2\x99\xBA
	TRASH = \xF0\x9F\x97\x91
endif

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME) 
				@echo "\033[32;1m\r$(NAME) compiled ${TICK}          \033[0m"

clean:
				@$(RM) $(OBJS)
				@echo "\033[32;1m\rDirectory cleaned ${TRASH}          \033[0m"

fclean:			clean
				@$(RM) $(NAME)
				@echo "\033[32;1m\rDirectory fully cleaned ${TRASH} ${TRASH} ${TRASH}          \033[0m"

re:				
				@echo "\033[32;1m\r$(NAME) recompiling ${RE}          \033[0m"
				@make -s fclean 
				@make -s all

.PHONY:			all clean fclean re