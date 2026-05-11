/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 12:05:06 by sergio            #+#    #+#             */
/*   Updated: 2025/08/24 18:34:32 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# define RED "\033[31m"
# define CYAN "\033[36m"
# define MAGENTA "\033[35m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define RESET "\033[0m"

# include <iostream>

class Animal
{
	protected:
		std::string _type;
	
	public:
		//OCF
		Animal();								// COnstructor x defecto
		Animal(const Animal& other);			// Constructor x copia
		Animal& operator=(const Animal& other);	// Operados de asignacion
		virtual ~Animal();						// Destructor x defecto

		// Setters y Getters
		void setType(std::string type);
		const std::string& getType() const;

		// Metdos
		virtual void makeSound() const;
};

# endif