# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cyuzbas <cyuzbas@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2023/02/20 22:29:54 by cyuzbas       #+#    #+#                  #
#    Updated: 2023/02/20 22:29:56 by cyuzbas       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	iter

CPP				=	c++

FLAGS			=	-Wall -Wextra -Werror -I -std=c++98 

SRC				=	main.cpp

INC				=	iter.hpp

OBJ_DIR			=	obj
OBJ				=	$(addprefix $(OBJ_DIR)/, $(SRC:%.cpp=%.o))

all : $(NAME)
	./iter

run: all
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