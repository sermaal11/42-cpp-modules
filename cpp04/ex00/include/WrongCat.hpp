/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 19:33:03 by sergio            #+#    #+#             */
/*   Updated: 2025/08/24 19:35:24 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include "../include/WrongAnimal.hpp"

class WrongCat : public WrongAnimal 
{
	public:
		// OCF
    	WrongCat();
    	WrongCat(const WrongCat& other);
    	WrongCat& operator=(const WrongCat& other);
    	~WrongCat();                         // <- NO virtual
    	
		// Metodos
		void makeSound() const;              // <- Sombreado, pero no polimórfico
};
#endif