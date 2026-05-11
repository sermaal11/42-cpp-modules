/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:07:31 by sergio            #+#    #+#             */
/*   Updated: 2025/07/13 18:33:42 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

# define RED "\033[31m"
# define CYAN "\033[36m"
# define MAGENTA "\033[35m"
# define GREEN "\033[32m"
# define RESET "\033[0m"
class	Zombie
{
    private:
		std::string _name;	// Como es un atributo privado, su nombre empieza con _ 
		Zombie();			// Impide que se cree sin parámetros
	public:
		Zombie(std::string name);	// Constructor parametrizado
		~Zombie();
		void announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif