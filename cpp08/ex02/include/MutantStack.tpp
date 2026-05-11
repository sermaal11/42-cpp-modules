/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:16:22 by sergio            #+#    #+#             */
/*   Updated: 2025/11/07 12:20:00 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// -----------------------------------------------------------------------------
// Implementación de MutantStack
// -----------------------------------------------------------------------------

// Constructor por defecto
template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

// Constructor de copia
template<typename T>
MutantStack<T>::MutantStack(const MutantStack& other) : std::stack<T>(other) {}

// Operador de asignación
template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& other)
{
    if (this != &other)
        std::stack<T>::operator=(other);
    return *this;
}

// Destructor
template<typename T>
MutantStack<T>::~MutantStack() {}

// Iteradores normales
template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() { return this->c.begin(); }

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() { return this->c.end(); }

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const { return this->c.begin(); }

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const { return this->c.end(); }

// Iteradores inversos
template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() { return this->c.rbegin(); }

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() { return this->c.rend(); }

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const { return this->c.rbegin(); }

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const { return this->c.rend(); }