/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:11:00 by sergio            #+#    #+#             */
/*   Updated: 2025/07/09 12:17:58 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "../include/utils.hpp"
class PhoneBook
{
    private:
        Contact _list[8];
        int     _count;

    public:
        PhoneBook();
        void add();
        void search();
};

#endif