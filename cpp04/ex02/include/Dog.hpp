/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 10:12:07 by sergio            #+#    #+#             */
/*   Updated: 2025/08/26 11:10:37 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "../include/Animal.hpp"
#include "../include/AAnimal.hpp"
#include "../include/Brain.hpp"

class Dog: public AAnimal
{
	private:
		Brain* _brain;

	public:
		//OCF
		Dog();								// Constructor x defecto
		Dog(const Dog& other);				// Constructor x copia
		Dog& operator=(const Dog& other);	// Operador de asignacion
		~Dog();								// Destructor

		//Metodos
		virtual void makeSound() const;
		void setIdea(int idx, const std::string& idea);
		std::string getIdea(int idx) const;
};

#endif