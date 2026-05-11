/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:31:28 by sergio            #+#    #+#             */
/*   Updated: 2025/10/20 19:01:22 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define CYAN    "\033[36m"
# define MAGENTA "\033[35m"
# define RESET   "\033[0m"

# include <string>
# include <iostream>
# include <algorithm>
# include <stdexcept>
# include <vector>
# include <list>

template <typename T>
typename T::iterator easyfind(T& container, int value);

# include "../include/easyfind.tpp"

#endif // EASYFIND_HPP
