/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 18:54:45 by sergio            #+#    #+#             */
/*   Updated: 2025/07/13 19:39:55 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie* zombiePtr;				// 1. Declaramos un puntero a Zombie
    zombiePtr = new Zombie(name);	// 2. Creamos un Zombie en el heap usando el constructor con parámetro

    return zombiePtr;				// 3. Devolvemos el puntero
}