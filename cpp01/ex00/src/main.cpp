/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <smarin-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:06:34 by sergio            #+#    #+#             */
/*   Updated: 2025/07/24 11:43:40 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(void)
{
    std::cout << CYAN << "== Zombien en el HEAP ==" << RESET << std::endl;
    Zombie* heapZombie;
    heapZombie = newZombie("HeapZ");
    heapZombie->announce();
	delete heapZombie;
    std::cout << CYAN << "== Zombien en el STACK ==" << RESET << std::endl;
    randomChump("StackZ");
    return (0);
}