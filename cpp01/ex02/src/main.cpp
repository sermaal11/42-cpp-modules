/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 10:33:44 by sergio            #+#    #+#             */
/*   Updated: 2025/07/14 11:27:39 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# define RED "\033[31m"
# define CYAN "\033[36m"
# define MAGENTA "\033[35m"
# define GREEN "\033[32m"
# define RESET "\033[0m"

int main(void)
{
    std::string brain = "HI THIS IS BRAIN";
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;

    std::cout << "Memory address of brain          : " << &brain << std::endl;
    std::cout << "Memory address held by stringPTR : " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF : " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "Value of brain                   : " << brain << std::endl;
    std::cout << "Value pointed to by stringPTR    : " << *stringPTR << std::endl;
    std::cout << "Value referenced by stringREF    : " << stringREF << std::endl;
    
    return (0);
}



