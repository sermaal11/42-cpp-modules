/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 01:10:31 by sergio            #+#    #+#             */
/*   Updated: 2025/07/14 10:09:54 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name)
{
    _name = name;
}

Zombie::~Zombie()
{
    std::cout << "[" << _index << "] "
            << _name << ": " << RED << "Has been destroyed" 
            << RESET << std::endl;
}

void Zombie::setZombieName(std::string zName)
{
    _name = zName;
}

void Zombie::setZombieIndex(int index)
{
    _index = index;
}

void Zombie::announce()
{
    std::cout << "[" << _index << "] "
            << _name << ": " << GREEN << "BraiiiiiiinnnzzzZ..."
            << RESET << std::endl;
}
