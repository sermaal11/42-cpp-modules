/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 12:34:25 by sergio            #+#    #+#             */
/*   Updated: 2025/08/24 19:11:45 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

//OCF
Dog::Dog() : Animal()
{
	_type = "Dog";
	std::cout << CYAN << "[DOG] Constructor called." << RESET << std::endl;
}

Dog::Dog(const Dog& other) 
	: Animal(other)
{
	std::cout << CYAN << "[DOG] Copy constructor called." << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
		Animal::operator=(other);
	std::cout << CYAN 
			<< "[DOG] Copy assignment operator called for " 
			<< _type << RESET << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << RED << "[DOG] Destructor called." << RESET << std::endl;
}

void Dog::makeSound() const 
{
	std::cout << GREEN "[DOG] *WOOF WOOF!*" << RESET << std::endl;
}
