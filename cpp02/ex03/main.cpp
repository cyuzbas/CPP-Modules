/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/30 20:07:05 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/01/04 13:48:28 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point);

int main(void)
{
	{
	const Point a;
	const Point b(10, 30);
	const Point c(20, 0);
	const Point point(10, 15);

	std::cout << std::endl;
	std::cout << "   Trinagle Coordinates;" << std::endl <<
	"| a -> x= " << a.getX() << "\ty= " << a.getY() << "\t|" << std::endl <<
	"| b -> x= " << b.getX() << "\ty= " << b.getY() << "\t|" << std::endl <<
	"| c -> x= " << c.getX() << "\ty= " << c.getY() << "\t|" << std::endl <<
	"Point( x= " << point.getX() << "\ty= " << point.getY() << "\t)";
	if (bsp(a, b, c, point) == true)
		std::cout << GREEN << " - TRUE Point is inside the triangle" << RESET << std::endl;
	else
		std::cout << RED << "FALSE -  Point is NOT inside the triangle" << RESET << std::endl;
	std::cout << "\n---------------------------------------------------------------------\n" << std::endl;
	}
	{
	const Point a;
	const Point b(10, 30);
	const Point c(20, 0);
	Point point(10, 30);

	std::cout << "   Trinagle Coordinates;" << std::endl <<
	"| a -> x= " << a.getX() << "\ty= " << a.getY() << "\t|" << std::endl <<
	"| b -> x= " << b.getX() << "\ty= " << b.getY() << "\t|" << std::endl <<
	"| c -> x= " << c.getX() << "\ty= " << c.getY() << "\t|" << std::endl <<
	"Point -> x= " << point.getX() << "\ty= " << point.getY() << "\t";
	if (bsp(a, b, c, point) == true)
		std::cout << GREEN << " - TRUE Point is inside the triangle" << RESET << std::endl;
	else
		std::cout << RED << " - FALSE -  Point is NOT inside the triangle" << RESET << std::endl;
	}
	std::cout << std::endl;
	return (0);

}
