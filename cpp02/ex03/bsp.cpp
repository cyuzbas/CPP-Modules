/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bsp.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/04 08:34:03 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/01/04 13:55:45 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* A utility function to calculate area of triangle 
	A = [ x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2)]/2(Dimension)  */
float area(const Point p1, const Point p2, const Point p3)
{
	float	area;

	area = ((p1.getX().toFloat()*(p2.getY().toFloat()-p3.getY().toFloat()) 
			+ p2.getX().toFloat()*(p3.getY().toFloat()-p1.getY().toFloat())
			+ p3.getX().toFloat()*(p1.getY().toFloat()-p2.getY().toFloat()))
			/2.0);

	if (area >= 0)
		return (area);
	return(area * -1);
}

/* A function to check whether point P(x, y) lies inside the triangle */
/* Calculates area of triangle ABC(A) and check if sum of
	PBC(A1), PAC(A2) and (PAB)A3 is same as A which means inside */
/* If one of the the PBC(A1), PAC(A2) and (PAB)A3 is equals to '0' 
	it means point is on edge (or if two equals to '0' a vertex) */
bool bsp(const Point a, const Point b, const Point c, const Point point)
{
	float A, A1, A2, A3;

	A = area (a, b, c);
	A1 = area (point, b, c);
	A2 = area (a, point, c); 
	A3 = area (a, b, point);

	if ( A1 == 0 || A2 == 0 || A3 == 0)
		return (false);
	return (A == A1 + A2 + A3);
}
