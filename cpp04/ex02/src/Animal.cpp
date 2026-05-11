/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 10:10:32 by sergio            #+#    #+#             */
/*   Updated: 2025/08/24 21:07:18 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

//OCF
Animal::Animal() 
	: _type("Generic Animal") 
{
	std::cout << CYAN << "[ANIMAL] Constructor called." << RESET << std::endl;
}

Animal::Animal(const Animal& other)
	: _type(other._type)
{
	std::cout << CYAN << "[ANIMAL] Copy constructor called." << RESET << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
	{
		_type = other._type;
		std::cout << CYAN 
				<< "[ANIMAL] Copy assignment operator called for " 
				<< _type << RESET << std::endl;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << RED << "[ANIMAL] Destructor called." << RESET << std::endl;
}

// Setters y Getters
void Animal::setType(std::string type)
{
	_type = type;
}

const std::string& Animal::getType() const
{
	return _type;
}

// Metodos
void Animal::makeSound() const
{
	std::cout << GREEN "[ANIMAL] *Generic Animal Sound*" << RESET << std::endl;
}

