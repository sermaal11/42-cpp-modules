/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <smarin-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 01:21:15 by sergio            #+#    #+#             */
/*   Updated: 2025/07/24 12:10:03 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombieHorde;

    if (name.empty())
    {
        std::cout << RED << " - Please enter a name for the zombies - " << RESET << std::endl;
        exit (1);
    }
    if (N > MAX_ZOMBIES)
    {
        std::cout << RED << " - Too many zombies requested! Please enter a number less than or equal to "
                  << MAX_ZOMBIES << " - " << RESET << std::endl;
        exit (1);
    }
    zombieHorde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombieHorde[i].setZombieName(name);
        zombieHorde[i].setZombieIndex(i);
    }
    return (zombieHorde);
}