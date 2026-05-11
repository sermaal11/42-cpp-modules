/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 23:27:35 by sergio            #+#    #+#             */
/*   Updated: 2025/07/16 13:23:14 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#define GREEN "\033[32m"
#define CYAN "\033[36m"
#define RED "\033[31m"
#define MAGENTA "\033[35m"
#define RESET "\033[0m"

# include <iostream>

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        void complain(std::string level);
};

#endif // HARL_HPP
