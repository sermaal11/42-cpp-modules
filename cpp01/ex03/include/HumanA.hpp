/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:52:20 by sergio            #+#    #+#             */
/*   Updated: 2025/07/14 14:35:10 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "../include/Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon&     _weapon;
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        void attack();
};

#endif // HUMANA_HPP
