# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cyuzbas <cyuzbas@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2023/02/17 10:12:20 by cyuzbas       #+#    #+#                  #
#    Updated: 2023/02/20 13:02:36 by cyuzbas       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	converter

CPP				=	c++

FLAGS			=	-Wall -Wextra -Werror -I -std=c++98 

SRC				=	main.cpp \
					Converter.cpp

INC				=	Converter.hpp

OBJ_DIR			=	obj
OBJ				=	$(addprefix $(OBJ_DIR)/, $(SRC:%.cpp=%.o))

all : $(NAME)

run: all
	 ./converter -1
	 ./converter a
	 ./converter -12.11
	 ./converter 123f
	 ./converter 0/0

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