/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/20 22:30:12 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/23 12:12:18 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	{
        std::cout << "CHAR ARRAY :" << std::endl;
        char array[6] = {'a', 'b', 'c', 'd', 'e','f'};
        iter(array, 3, display);
        std::cout << std::endl;
    }

	{
        std::cout << "STRING ARRAY :" << std::endl;
        std::string array[5] = {"hello", "world", "how", "are", "you?"};
        iter(array, 2, display);
        std::cout << std::endl;
    }

    {
        std::cout << "INT ARRAY :" << std::endl;
        int array[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        iter(array, 4, display);
        std::cout << std::endl;
    }

    {
        std::cout << "DOUBLE ARRAY :" << std::endl;
        double array[9] = {1.4, 2.2, 3.6, 4.1, 5.7, 6.41, 7.12, 8.1, 9.4};
        iter(array, 1, display);
        std::cout << std::endl;
    }

    {
        std::cout << "FLOAT ARRAY :" << std::endl;
        float array[9] = {1.4f, 2.2f, 3.6f, 4.1f, 5.7f, 6.41f, 7.12f, 8.1f, 9.4f};
        iter(array, 2, display);
        std::cout << std::endl;
    }
}