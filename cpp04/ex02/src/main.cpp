/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 10:40:21 by sergio            #+#    #+#             */
/*   Updated: 2025/08/26 11:13:12 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/AAnimal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/Brain.hpp"

int main(void)
{
	//AAnimal a; // No compila porque es una clase abstracta
	
	const AAnimal* d = new Dog();
    const AAnimal* c = new Cat();

    std::cout << d->getType() << "\n";
    std::cout << c->getType() << "\n";

    d->makeSound();
    c->makeSound();

    delete d;
    delete c;
	return 0;
}