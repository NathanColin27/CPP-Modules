# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nathan <nathan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/25 22:13:13 by nathan            #+#    #+#              #
#    Updated: 2021/05/02 20:13:34 by nathan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Supertrap

SRCS			=	FragTrap.class.cpp\
					ScavTrap.class.cpp\
					ClapTrap.class.cpp\
					NinjaTrap.class.cpp\
					SuperTrap.class.cpp\
					main.cpp

OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -std=c++98 -Wall -Wextra -Werror -I. 


all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME) 

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re