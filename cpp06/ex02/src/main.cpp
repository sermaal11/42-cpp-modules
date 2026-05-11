/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 18:00:00 by sergio            #+#    #+#             */
/*   Updated: 2026/05/11 18:00:00 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"
#include <iostream>

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

int	main(void)
{
	Base*	instance = generate();

	std::cout << "identify(Base*): ";
	identify(instance);
	std::cout << "identify(Base&): ";
	identify(*instance);

	delete instance;
	return (0);
}
