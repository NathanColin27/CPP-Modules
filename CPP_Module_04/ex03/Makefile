# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/25 22:13:13 by nathan            #+#    #+#              #
#    Updated: 2021/05/07 12:46:30 by ncolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= materia

SRCS			=	AMateria.class.cpp\
					Cure.class.cpp\
					MateriaSource.class.cpp\
					Character.class.cpp\
					Ice.class.cpp\
					main.cpp

OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -I.


all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME) 

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re