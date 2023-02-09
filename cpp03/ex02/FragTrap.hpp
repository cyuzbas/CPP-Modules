/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 14:27:46 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/08 14:39:03 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
private:

	bool _highFivesGuys;

public:
	
	FragTrap( void );
	FragTrap( std::string const name);
	FragTrap( FragTrap const &src);
	~FragTrap( void );

	FragTrap &operator=( FragTrap const &src );
	
	void	attack( const std::string &target );
	void	highFivesGuys(void);
};

#endif