/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 21:48:10 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/30 13:38:04 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int file_error(void){
	std::cerr << "File Error!" << std::endl;
	return(EXIT_FAILURE);
}

int main(int argc, char **argv){
	
	std::string	filename;
	std::string	s1;
	std::string	s2;
	std::string	strInput;
	std::size_t	found;
	
	if (argc != 4){
		std::cout << "Usage: ./sed <filename> <search> <replace>" << std::endl;
		return (EXIT_FAILURE);
	}

	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	std::ifstream 	inf(filename);
	if (!inf)
		return (file_error());

	filename = filename + ".replace";
	std::ofstream	outf(filename);
	if (!outf){
		inf.close();
		return (file_error());
	}

	while (std::getline(inf, strInput))
    {
		found = strInput.find(s1);
		while (found != std::string::npos){
			strInput.erase(found, s1.length());
			strInput.insert(found, s2);
			found = strInput.find(s1, found+1);
		}
		outf << strInput;
		if (inf.peek() != EOF)
			outf << std::endl;
    }
	inf.close();
	outf.close();
	return (EXIT_SUCCESS);
		
	
}