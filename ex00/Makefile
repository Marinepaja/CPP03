# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/05 13:30:10 by mlaporte          #+#    #+#              #
#    Updated: 2024/12/05 13:30:10 by mlaporte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00
SRC = main.cpp ClapTrap.cpp
OBJ = $(SRC:.cpp=.o)
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++
INCLUDES = -I.

all: $(NAME)

$(NAME): $(OBJ) 
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(OBJ) -o $(NAME)

%.o: %.cpp %.hpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
