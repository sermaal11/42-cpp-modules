/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 13:01:23 by sergio            #+#    #+#             */
/*   Updated: 2025/08/24 21:10:29 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "../include/Animal.hpp"

class Cat: public Animal
{
	public:
		//OCF
		Cat();								// Constructor x defecto
		Cat(const Cat& other);				// Constructor x copia
		Cat& operator=(const Cat& other);	// Operador de asignacion
		~Cat();								// Destructor

		//Metodos
		void makeSound() const;
};

#endif
