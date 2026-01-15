/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:48:30 by njung             #+#    #+#             */
/*   Updated: 2026/01/15 16:11:35 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void incrementInt(int & x) {
    x++;
}

int main(void) {
    int intArray[] = {0, 1, 2, 3, 4};
    size_t intArrayLen = 5;

    std::cout << "Original int array: ";
    iter(intArray, intArrayLen, printElement<int>);
    std::cout << std::endl;

    iter(intArray, intArrayLen, incrementInt);

    std::cout << "Incremented int array: ";
    iter(intArray, intArrayLen, printElement<int>);
    std::cout << std::endl;

    std::string strArray[] = {"apple", "banana", "cherry"};
    std::cout << "String array: ";
    iter(strArray, 3, printElement<std::string>);
    std::cout << std::endl;

    return 0;
}