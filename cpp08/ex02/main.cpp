/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/25 21:06:50 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/25 22:24:37 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

/*If you run it a first time with your MutantStack, and a second time replacing 
the 'MutantStack' with, for example, a 'std::list', the two outputs should be 
the same. Ofcourse, when testing another container, update the code below with 
the correspondingmember functions (push() -> become push_back() etc.)   */


int main(void) 
{
	std::cout << "--------------TEST FROM SUBJECT--------------" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << "	(size of MutantStack)" << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
	std::cout << std::endl;
	// std::cout << "from beginning to end: " << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
	
	std::cout << std::endl;
   	std::cout << "--------------CONTROL LIST--------------" << std::endl;
	{
	std::list<int> controlstack;
    controlstack.push_back(5);
    controlstack.push_back(17);
	std::cout << controlstack.back() << std::endl;
    // std::cout << "size of controlstack: " << controlstack.size() << std::endl;
	// std::cout << "delete 1 int from stack..." << std::endl;
    controlstack.pop_back();
    std::cout << controlstack.size() << "	(size of ControlStack)"<< std::endl;
	controlstack.push_back(3);
    controlstack.push_back(5);
    controlstack.push_back(737);
	controlstack.push_back(0);
	std::cout << std::endl;
	// std::cout << "size of controlstack: " << controlstack.size() << std::endl;
	// std::cout << "from beginning to end: " << std::endl;
    std::list<int>::iterator first = controlstack.begin();
    std::list<int>::iterator last = controlstack.end();
    while (first != last) {
    	std::cout << *first << std::endl;
    	++first;
    }
	}
    return 0;
}