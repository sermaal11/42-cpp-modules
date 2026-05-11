/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 10:12:32 by sergio            #+#    #+#             */
/*   Updated: 2025/08/26 10:34:09 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

//OCF
Dog::Dog() 
	: Animal(), _brain(new Brain())
{
	_type = "Dog";
	std::cout << CYAN << "[DOG] Constructor called." << RESET << std::endl;
}

Dog::Dog(const Dog& other) 
	: Animal(other), _brain(new Brain(*other._brain))
{
	std::cout << CYAN << "[DOG] Copy constructor called." << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		*_brain = *other._brain;
	}
	std::cout << CYAN 
			<< "[DOG] Copy assignment operator called for " 
			<< _type << RESET << std::endl;
	return *this;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << RED << "[DOG] Destructor called." << RESET << std::endl;
}

// Metodos
void Dog::makeSound() const 
{
	std::cout << GREEN "[DOG] *WOOF WOOF!*" << RESET << std::endl;
}

void Dog::setIdea(int idx, const std::string& idea) 
{
    _brain->setIdea(idx, idea);
}

std::string Dog::getIdea(int idx) const 
{
    return _brain->getIdea(idx);
}
