/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:31:22 by sergio            #+#    #+#             */
/*   Updated: 2025/10/20 19:18:45 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"

int main() {
    std::vector<int> vec;
    for (int i = 0; i <= 10; ++i) 
		vec.push_back(i);

    std::cout << CYAN << "== Test 1: Buscar 4 en [0..10] ==\n" << RESET;

    try 
	{
        std::vector<int>::iterator it = ::easyfind(vec, 4);
        std::cout << GREEN << "Encontrado: " << *it
                  << "  (pos = " << std::distance(vec.begin(), it) << ")\n"
                  << RESET;
    } 
	catch (const std::exception& e) 
	{
        std::cout << RED << "Error: " << e.what() << "\n" << RESET;
    }

    std::cout << CYAN << "\n== Test 2: Buscar 11 en [0..10] ==\n" << RESET;

    try 
	{
        std::vector<int>::iterator it = ::easyfind(vec, 11);
        std::cout << GREEN << "Encontrado: " << *it
                  << "  (pos = " << std::distance(vec.begin(), it) << ")\n"
                  << RESET;
    } 
	catch (const std::exception& e) 
	{
        std::cout << RED << "Error: " << e.what() << "\n" << RESET;
    }

    std::cout << MAGENTA << "\nFin de pruebas.\n" << RESET;
    return 0;
}