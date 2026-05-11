/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:52:51 by sergio            #+#    #+#             */
/*   Updated: 2025/07/14 14:03:03 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon() 
{
    std::cout << GREEN << "Weapon created" << RESET << std::endl;
}

Weapon::Weapon(std::string type)
{
    _type = type;
    std::cout << GREEN << "Weapon created: " << _type << RESET << std::endl;
}

Weapon::~Weapon() 
{
    std::cout << RED << "Weapon destroyed: " << _type << RESET << std::endl;
}

void Weapon::setType(std::string newType)
{
    this->_type = newType;
}

const std::string& Weapon::getType() const
{
    return this->_type;
}
