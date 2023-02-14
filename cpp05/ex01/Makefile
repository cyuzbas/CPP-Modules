# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cyuzbas <cyuzbas@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2023/02/13 18:21:42 by cyuzbas       #+#    #+#                  #
#    Updated: 2023/02/14 17:22:37 by cyuzbas       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	Bureaucrat

CPP				=	c++

FLAGS			=	-Wall -Wextra -Werror -I -std=c++98 

SRC				=	main.cpp \
					Bureaucrat.cpp

INC				=	Bureaucrat.hpp

OBJ_DIR			=	obj
OBJ				=	$(addprefix $(OBJ_DIR)/, $(SRC:%.cpp=%.o))

all : $(NAME)

run : all
	./Bureaucrat

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