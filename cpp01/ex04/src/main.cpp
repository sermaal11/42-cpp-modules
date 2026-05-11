/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 22:38:22 by sergio            #+#    #+#             */
/*   Updated: 2025/07/15 12:16:12 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#define RED "\033[31m"
#define CYAN "\033[36m"
#define MAGENTA "\033[35m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

std::string replaceString(const std::string& line, const std::string& s1, const std::string& s2)
{
    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = line.find(s1, pos)) != std::string::npos)
    {
        result.append(line, pos, found - pos);
        result.append(s2);
        pos = found + s1.length();
    }
    result.append(line, pos);
    return (result);
}

int main(int argc, char** argv)
{
    if (argc != 4)
    {
        std::cerr << RED << "Error: Usage: ./Sed_is_for_losers <filename>" 
        << " <std::string s1>"
        << " <std::string s2>"
        << RESET << std::endl;
        return 1;
    }
    std::ifstream inputFile(argv[1]);
    if (!inputFile.is_open())
    {
        std::cerr << RED << "Error: failed to open the input file." << RESET << std::endl;
        return (1);
    }
    std::string outputFileName = std::string(argv[1]) + ".replace";
    std::ofstream outputFile(outputFileName.c_str());
    if (!outputFile.is_open())
    {
        std::cerr << RED << "Error: failed to create output file." << RESET << std::endl;
        return (1);
    }
    std::string line;
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    while (std::getline(inputFile, line))
    {
        outputFile << replaceString(line, s1, s2);
        if (!inputFile.eof())
            outputFile << std::endl;
    }
    inputFile.close();
    outputFile.close();
    return (0);
}


