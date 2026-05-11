/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 19:25:22 by sergio            #+#    #+#             */
/*   Updated: 2025/10/20 23:28:11 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define CYAN    "\033[36m"
# define MAGENTA "\033[35m"
# define RESET   "\033[0m"

# include <string>
# include <iostream>
# include <vector>
# include <stdexcept>
# include <algorithm>
# include <cstdlib>   // rand(), srand()
# include <ctime>     // time()
# include <iterator>   // std::distance, iterator_traits
# include <limits>

class Span
{
	private:
		unsigned int _maxSize;
		std::vector<int> _numbers;

	public:
		//OCF
		Span();
		Span(unsigned int maxSize);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		//Metodos
		void addNumber(int number);
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;
		template <typename InputIt>
		void addNumber(InputIt first, InputIt last);
};

template <typename InputIt>
void Span::addNumber(InputIt first, InputIt last)
{
    // Cuántos elementos vienen en el rango [first, last)
    std::size_t count = static_cast<std::size_t>(std::distance(first, last));

    // Comprobar capacidad
    if (_numbers.size() + count > _maxSize)
        throw std::runtime_error("Span is full");

    // Insertar todos de golpe
    _numbers.insert(_numbers.end(), first, last);
}

#endif // SPAN_HPP
