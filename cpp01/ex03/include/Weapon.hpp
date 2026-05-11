/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarin-a <smarin-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:52:11 by sergio            #+#    #+#             */
/*   Updated: 2025/07/24 13:02:15 by smarin-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# define RED "\033[31m"
# define CYAN "\033[36m"
# define MAGENTA "\033[35m"
# define GREEN "\033[32m"
# define RESET "\033[0m"

# include <iostream>

class Weapon
{
private:
    std::string _type;
public:
    Weapon();
    Weapon(std::string type);
    ~Weapon(); 
    void setType(std::string newType);
    const std::string& getType() const;
};

#endif // WEAPON_HPP
