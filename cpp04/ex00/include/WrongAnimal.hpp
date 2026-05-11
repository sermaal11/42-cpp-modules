/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 19:25:08 by sergio            #+#    #+#             */
/*   Updated: 2025/08/24 19:34:58 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# define CYAN  "\033[36m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define MAGENTA "\033[35m"
# define RESET "\033[0m"

# include <iostream>
# include <string>

class WrongAnimal 
{
	protected:
    	std::string _type;
	
	public:
		// OCF
    	WrongAnimal();
    	WrongAnimal(const WrongAnimal& other);
    	WrongAnimal& operator=(const WrongAnimal& other);
    	~WrongAnimal();                      // <- NO virtual
		
		// Getter
    	const std::string& getType() const;

		// Metodos
    	void makeSound() const;              // <- NO virtual
};

#endif