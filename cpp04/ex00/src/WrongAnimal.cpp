/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 19:27:44 by sergio            #+#    #+#             */
/*   Updated: 2025/08/24 19:35:18 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

//OCF
WrongAnimal::WrongAnimal() 
	: _type("WrongAnimal") 
{
    std::cout << CYAN << "[WRONG_ANIMAL] Default constructor" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) 
	: _type(other._type) 
{
    std::cout << CYAN << "[WRONG_ANIMAL] Copy constructor" << RESET << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) 
{
    if (this != &other) 
		_type = other._type;
    std::cout << CYAN << "[WRONG_ANIMAL] Copy assigment" << RESET << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal() 
{
    std::cout << RED << "[WRONG_ANIMAL] Destructor" << RESET << std::endl;
}

// Getter
const std::string& WrongAnimal::getType() const 
{ 
	return _type; 
}

// Metodos
void WrongAnimal::makeSound() const 
{
    std::cout << GREEN << "[WRONG_ANIMAL] ???" << RESET << std::endl;
}
