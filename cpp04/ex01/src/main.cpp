/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <smarin-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 10:09:21 by sergio            #+#    #+#             */
/*   Updated: 2025/08/26 12:52:46 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/Brain.hpp"

int main()
{
	// [1] Creación directa (sin polimorfismo)
    std::cout << "\n[1] Dog y Cat directos\n";
    Dog dog;
    std::cout << dog.getType() << " makes: ";
    dog.makeSound();
    Cat cat;
    std::cout << cat.getType() << " makes: ";
    cat.makeSound();
	// fin de scope → deben verse destructores de Dog/Cat y luego Animal

	// [2] Polimorfismo con Animal*
    std::cout << "\n[2] Polimorfismo con Animal*\n";
    const Animal* aDog = new Dog();
    const Animal* aCat = new Cat();
    std::cout << aDog->getType() << " makes: ";
    aDog->makeSound();
    std::cout << aCat->getType() << " makes: ";
    aCat->makeSound();
    delete aDog; // ~Dog → ~Animal
    delete aCat; // ~Cat → ~Animal

	// [3] Array polimórfico
    std::cout << "\n[3] Array polimórfico\n";
    const int n = 4;
    Animal* zoo[n];
    for (int i = 0; i < n; ++i) 
	{
        if (i % 2)
            zoo[i] = new Dog();
        else
            zoo[i] = new Cat();
        std::cout << zoo[i]->getType() << " makes: ";
        zoo[i]->makeSound();
    }
    for (int i = 0; i < n; ++i) 
        delete zoo[i];

	// [4] Deep copy — constructor de copia
    std::cout << "\n[4] Deep copy — ctor copia\n";
    Dog d1;
    d1.setIdea(0, "Chase the ball");
    Dog d2(d1); // ctor copia (debe clonar Brain)
    std::cout << "d1.idea[0]: " << d1.getIdea(0) << "\n";
    std::cout << "d2.idea[0]: " << d2.getIdea(0) << "\n";
    d1.setIdea(0, "Guard the house");
    std::cout << "d1.idea[0] (mod): " << d1.getIdea(0) << "\n";
    std::cout << "d2.idea[0] (igual): " << d2.getIdea(0) << "\n";

	 // [5] Deep copy — operator=
    std::cout << "\n[5] Deep copy — operator=\n";
    Dog a;
    Dog b;
    a.setIdea(1, "Dig a hole");
    b.setIdea(1, "Sleep on sofa");
    std::cout << "Antes:\n";
    std::cout << "a.idea[1]: " << a.getIdea(1) << "\n";
    std::cout << "b.idea[1]: " << b.getIdea(1) << "\n";
    b = a; // asignación profunda (copia contenido de Brain)
    std::cout << "Después (b = a):\n";
    std::cout << "a.idea[1]: " << a.getIdea(1) << "\n";
    std::cout << "b.idea[1]: " << b.getIdea(1) << "\n";
    a.setIdea(1, "Bark at mailman");
    std::cout << "Tras modificar a:\n";
    std::cout << "a.idea[1]: " << a.getIdea(1) << "\n";
    std::cout << "b.idea[1] (igual): " << b.getIdea(1) << "\n";
    std::cout << std::endl;
	return 0;
}


