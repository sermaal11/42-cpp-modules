/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 10:11:20 by sergio            #+#    #+#             */
/*   Updated: 2025/08/26 11:10:31 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "../include/Animal.hpp"
#include "../include/AAnimal.hpp"
#include "../include/Brain.hpp"

class Cat: public AAnimal
{
	private:
		Brain* _brain;
	
	public:
		//OCF
		Cat();								// Constructor x defecto
		Cat(const Cat& other);				// Constructor x copia
		Cat& operator=(const Cat& other);	// Operador de asignacion
		~Cat();								// Destructor

		//Metodos
		virtual void makeSound() const;
		void setIdea(int idx, const std::string& idea);
		std::string getIdea(int idx) const;
};

#endif
