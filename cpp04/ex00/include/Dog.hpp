/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 12:30:28 by sergio            #+#    #+#             */
/*   Updated: 2025/08/24 19:05:21 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "../include/Animal.hpp"

class Dog: public Animal
{
	public:
		//OCF
		Dog();								// Constructor x defecto
		Dog(const Dog& other);				// Constructor x copia
		Dog& operator=(const Dog& other);	// Operador de asignacion
		~Dog();								// Destructor

		//Metodos
		void makeSound() const;
};

#endif