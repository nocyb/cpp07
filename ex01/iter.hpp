/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:48:41 by njung             #+#    #+#             */
/*   Updated: 2026/01/15 16:12:19 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T, typename F> void iter(T *array, const size_t length, F f)
{
    for(size_t i = 0; i < length; i++)
    {
        f(array[i]);
    }
}

template<typename T> void printElement(T const & x) {
    std::cout << x << " ";
} // for main tests