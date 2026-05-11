/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:52:34 by sergio            #+#    #+#             */
/*   Updated: 2025/07/14 14:53:30 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"
#include "../include/HumanA.hpp"
#include "../include/HumanB.hpp"

#include "../include/Weapon.hpp"
#include "../include/HumanA.hpp"
#include "../include/HumanB.hpp"

int main() 
{
    std::cout << CYAN << "=== Test A: HumanA con arma por referencia ===" << RESET << std::endl;
    {
        Weapon club("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }

    std::cout << std::endl << CYAN << "=== Test B: HumanB sin arma, luego se le asigna ===" << RESET << std::endl;
    {
        Weapon club("crude spiked club");
        HumanB jim("Jim");
        jim.attack(); // No debería tener arma aún
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }

    std::cout << std::endl << CYAN << "=== Test C: HumanB cambia de arma en tiempo de ejecución ===" << RESET << std::endl;
    {
        Weapon sword("longsword");
        Weapon axe("battle axe");

        HumanB alice("Alice");
        alice.attack(); // sin arma
        alice.setWeapon(sword);
        alice.attack(); // con espada
        sword.setType("flaming sword");
        alice.attack(); // con espada cambiada
        alice.setWeapon(axe);
        axe.setType("double-headed axe");
        alice.attack(); // con hacha
    }

    std::cout << std::endl << CYAN << "=== Test D: HumanA con múltiples ataques ===" << RESET << std::endl;
    {
        Weapon dagger("dagger");
        HumanA zara("Zara", dagger);
        zara.attack();
        dagger.setType("poisoned dagger");
        zara.attack();
        dagger.setType("rusty dagger");
        zara.attack();
    }

    return 0;
}
