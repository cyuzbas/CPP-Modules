/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/10 17:38:36 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/13 12:59:46 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

#define GRAY	"\033[30m"
#define RED  	"\033[1;31m"
#define GREEN 	"\033[32m"
#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define PINK	"\033[35m"
#define CYAN	"\033[36m"
#define RESET	"\033[0m"

class Brain
{
private:
	
	std::string _ideas[100];
	
public:
	Brain( void );
	Brain ( Brain const &src );
	~Brain( void );

	Brain &operator=( Brain const &src );
	
	const std::string &getIdea( int i ) const;
	void setIdea( int i, std::string idea );

};

#endif