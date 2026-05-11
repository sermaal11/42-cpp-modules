/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <smarin-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 23:27:27 by sergio            #+#    #+#             */
/*   Updated: 2025/07/24 13:33:21 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << RED << "Usage: ./harlFilter LEVEL \n" 
        << "LEVEL -> DEBUG, INFO, WARNING, ERROR"
        << RESET << std::endl;
        return 1;
    }
    std::string level = argv[1];
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int index = -1;
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            index = i;
            break;
        }
    }
    Harl harl;
    if (index == -1)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return 1;
    }
    else
    {
        switch (index)
        {
            case 0: harl.complain("DEBUG");
                // fall through
            case 1: harl.complain("INFO");
                // fall through
            case 2: harl.complain("WARNING");
                // fall through
            case 3: harl.complain("ERROR");
                break;
        }
    }
    return (0);
}