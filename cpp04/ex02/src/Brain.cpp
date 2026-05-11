/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 10:28:14 by sergio            #+#    #+#             */
/*   Updated: 2025/08/26 11:15:28 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

// OCF
Brain::Brain()
{
	std::cout << CYAN << "[BRAIN] Constructor called." << RESET << std::endl;
}

Brain::Brain(const Brain& other)
{
	for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	std::cout << CYAN << "[BRAIN] Copy constructor called." << RESET << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
		std::cout << CYAN 
				<< "[BRAIN] Copy assignment operator called" 
				<< RESET << std::endl;
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << RED << "[BRAIN] Destructor called." << RESET << std::endl;
}

// Setter y Getter
void Brain::setIdea(int indx, const std::string& idea)
{
	if (indx >= 0 && indx < 100)
        _ideas[indx] = idea;
}

std::string Brain::getIdea(int indx) const
{
	if (indx >= 0 && indx < 100)
        return _ideas[indx];
    return "";
}
