# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cyuzbas <cyuzbas@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2023/01/04 13:58:13 by cyuzbas       #+#    #+#                  #
#    Updated: 2023/02/08 15:00:09 by cyuzbas       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	FragTrap

CPP				=	c++

FLAGS			=	-Wall -Wextra -Werror -I -std=c++98 

SRC				=	main.cpp \
					ClapTrap.cpp \
					ScavTrap.cpp \
					FragTrap.cpp

INC				=	ClapTrap.hpp \
					ScavTrap.hpp \
					FragTrap.hpp

OBJ_DIR			=	obj
OBJ				=	$(addprefix $(OBJ_DIR)/, $(SRC:%.cpp=%.o))

all : $(NAME)

run : all
	./FragTrap

$(OBJ_DIR)/%.o : %.cpp $(INC)
	@mkdir -p $(dir $@)
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $^ -o $@

clean : 
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -rf $(NAME)
re : fclean all

.PHONY : clean, fclean, all, re, run