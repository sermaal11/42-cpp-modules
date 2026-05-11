/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <smarin-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 01:10:25 by sergio            #+#    #+#             */
/*   Updated: 2025/07/24 12:08:17 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(int argc, char **argv)
{
    
    if (argc != 3)
    {
        std::cout << RED << "Usage: ./Moar_brainz! <number_of_Zombies>" 
        << " <name_of_Zombies>"
        << RESET << std::endl;
        return 1;
    }
    long zAmmount;
    zAmmount = std::atol(argv[1]);
    if (zAmmount < 1 || zAmmount > INT_MAX || zAmmount < INT_MIN)
    {
        std::cout << RED << " - Please enter a positive number of zombies - " << RESET << std::endl;
        return 1;
    }
    Zombie* horde;
    horde = zombieHorde(zAmmount, argv[2]);
    for (int i = 0; i < zAmmount; i++)
        horde[i].announce();
    delete[] horde;
    horde = NULL;
    return (0);
}
