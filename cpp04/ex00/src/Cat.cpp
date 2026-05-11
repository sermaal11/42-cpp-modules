/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 12:34:25 by sergio            #+#    #+#             */
/*   Updated: 2025/08/24 21:10:00 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

//OCF
Cat::Cat() : Animal()
{
	_type = "Cat";
	std::cout << CYAN << "[CAT] Constructor called." << RESET << std::endl;
}

Cat::Cat(const Cat& other) 
	: Animal(other)
{
	std::cout << CYAN << "[CAT] Copy constructor called." << RESET << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
		Animal::operator=(other);
	std::cout << CYAN 
			<< "[CAT] Copy assignment operator called for " 
			<< _type << RESET << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << RED << "[CAT] Destructor called." << RESET << std::endl;
}

void Cat::makeSound() const 
{
	std::cout << GREEN "[CAT] *MIAU MIAU!*" << RESET << std::endl;
}
