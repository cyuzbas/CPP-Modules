# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cyuzbas <cyuzbas@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/12/30 20:00:31 by cyuzbas       #+#    #+#                  #
#    Updated: 2022/12/30 20:00:33 by cyuzbas       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	fixed

CPP				=	c++

FLAGS			=	-Wall -Wextra -Werror -I -std=c++98 

SRC				=	main.cpp \
					Fixed.cpp

INC				=	Fixed.hpp

OBJ_DIR			=	obj
OBJ				=	$(addprefix $(OBJ_DIR)/, $(SRC:%.cpp=%.o))

all : $(NAME)

run : all
	./fixed

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