/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 19:25:33 by sergio            #+#    #+#             */
/*   Updated: 2025/10/20 23:25:29 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

int main()
{
    std::cout << CYAN << "== Test 1: Caso feliz (5 números) ==" << RESET << std::endl;
    try {
        Span sp(5);

        // Creamos un vector temporal con los números a añadir
        std::vector<int> nums;
        nums.push_back(6);
        nums.push_back(3);
        nums.push_back(17);
        nums.push_back(9);
        nums.push_back(11);

        // Añadimos todos de golpe usando el rango [begin, end)
        sp.addNumber(nums.begin(), nums.end());

        std::cout << GREEN << "shortest = " << sp.shortestSpan() << RESET << std::endl;
        std::cout << GREEN << "longest  = " << sp.longestSpan()  << RESET << std::endl;
    } catch (const std::exception& e) {
        std::cout << RED << "Error: " << e.what() << RESET << std::endl;
    }

    std::cout << CYAN << "\n== Test 2: Capacidad llena con rango ==" << RESET << std::endl;
    try {
        Span sp(3);
        std::vector<int> numbers;
        numbers.push_back(10);
        numbers.push_back(20);
        numbers.push_back(30);

        // Añadimos todos de golpe correctamente
        sp.addNumber(numbers.begin(), numbers.end());

        // Intentamos añadir un rango adicional que sobrepasa la capacidad
        std::vector<int> extra;
        extra.push_back(40);
        extra.push_back(50);
        std::cout << YELLOW << "Intentando añadir rango extra..." << RESET << std::endl;
        sp.addNumber(extra.begin(), extra.end()); // debe lanzar
    } catch (const std::exception& e) {
        std::cout << YELLOW << "Aviso: " << e.what() << RESET << std::endl;
    }

    std::cout << CYAN << "\n== Test 3: Números negativos y mezcla ==" << RESET << std::endl;
    try {
        Span sp(5);
        std::vector<int> mix;
        mix.push_back(-10);
        mix.push_back(-3);
        mix.push_back(0);
        mix.push_back(2);
        mix.push_back(9);

        sp.addNumber(mix.begin(), mix.end());

        std::cout << GREEN << "shortest = " << sp.shortestSpan() << RESET << std::endl;
        std::cout << GREEN << "longest  = " << sp.longestSpan()  << RESET << std::endl;
    } catch (const std::exception& e) {
        std::cout << RED << "Error: " << e.what() << RESET << std::endl;
    }

    std::cout << CYAN << "\n== Test 4: Test grande (10.000 números aleatorios con rango) ==" << RESET << std::endl;
    try {
        Span big(10000);

        std::vector<int> randoms(10000);
        srand(static_cast<unsigned int>(time(NULL)));
        for (int i = 0; i < 10000; ++i)
            randoms[i] = rand();

        // Añadir todos en una sola llamada
        big.addNumber(randoms.begin(), randoms.end());

        std::cout << GREEN << "shortest = " << big.shortestSpan() << RESET << std::endl;
        std::cout << GREEN << "longest  = " << big.longestSpan()  << RESET << std::endl;
    } catch (const std::exception& e) {
        std::cout << RED << "Error: " << e.what() << RESET << std::endl;
    }

    std::cout << MAGENTA << "\nFin de pruebas." << RESET << std::endl;
    return 0;
}