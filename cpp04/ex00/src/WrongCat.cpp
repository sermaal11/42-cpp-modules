/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 19:34:28 by sergio            #+#    #+#             */
/*   Updated: 2025/08/24 19:37:05 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

// OCF
WrongCat::WrongCat() 
{
    _type = "WrongCat";
    std::cout << MAGENTA << "[WRONG_CAT] Default constructor" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) 
{
    std::cout << MAGENTA << "[WRONG_CAT] Copy constructor" << RESET << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) 
{
    if (this != &other)
		WrongAnimal::operator=(other);
    std::cout << MAGENTA << "[WRONG_CAT] Copy assigment" << RESET << std::endl;
    return *this;
}

WrongCat::~WrongCat() 
{
    std::cout << MAGENTA << "[WRONG_CAT] Destructor" << RESET << std::endl;
}
void WrongCat::makeSound() const 
{
    std::cout << MAGENTA << "[WRONG_CAT] Meow??" << RESET << std::endl;
}