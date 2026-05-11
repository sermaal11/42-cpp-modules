/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <smarin-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 01:10:41 by sergio            #+#    #+#             */
/*   Updated: 2025/07/24 12:07:37 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

// COLOR MSG //
# define RED "\033[31m"
# define CYAN "\033[36m"
# define MAGENTA "\033[35m"
# define GREEN "\033[32m"
# define RESET "\033[0m"

// MAX_ZOMBIES //
# define MAX_ZOMBIES 500000

// HEADERS //
# include <iostream>
# include <cstdlib>
# include <climits>

class Zombie
{
    private:
        std::string _name;
        int _index;
    public:
        Zombie();
        Zombie(std::string zName);
        ~Zombie();
        void setZombieName(std::string zName);
        void setZombieIndex(int index);
        void announce();
        
};

Zombie* zombieHorde(int N, std::string name);

#endif // ZOMBIE_HPP
