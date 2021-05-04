# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/25 22:13:13 by nathan            #+#    #+#              #
#    Updated: 2021/05/04 12:26:20 by ncolin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= wasteland

SRCS			=	main.cpp\
					Character.class.cpp\
					Enemy.class.cpp\
					PlasmaRiffle.class.cpp\
					PowerFist.class.cpp\
					RadScorpion.class.cpp\
					SuperMutant.class.cpp\
					AWeapon.class.cpp

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