/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 10:11:38 by sergio            #+#    #+#             */
/*   Updated: 2025/08/26 10:34:40 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

//OCF
Cat::Cat() 
	: Animal(), _brain(new Brain())
{
	_type = "Cat";
	std::cout << CYAN << "[CAT] Constructor called." << RESET << std::endl;
}

Cat::Cat(const Cat& other) 
	: Animal(other), _brain(new Brain(*other._brain))
{
	std::cout << CYAN << "[CAT] Copy constructor called." << RESET << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		*_brain = *other._brain;
	}
	std::cout << CYAN 
			<< "[CAT] Copy assignment operator called for " 
			<< _type << RESET << std::endl;
	return *this;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << RED << "[CAT] Destructor called." << RESET << std::endl;
}

// Metodos
void Cat::makeSound() const 
{
	std::cout << GREEN "[CAT] *MIAU MIAU!*" << RESET << std::endl;
}

void Cat::setIdea(int idx, const std::string& idea) 
{
    _brain->setIdea(idx, idea);
}

std::string Cat::getIdea(int idx) const 
{
    return _brain->getIdea(idx);
}
