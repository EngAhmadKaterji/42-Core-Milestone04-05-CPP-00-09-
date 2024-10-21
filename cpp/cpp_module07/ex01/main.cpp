/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:10:17 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/22 18:10:17 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void printElement(int x) {
    std::cout << x << " ";
}

void printString(const std::string& str) {
    std::cout << str << " ";
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    int intArrayLength = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Applying printElement on intArray: ";
    iter(intArray, intArrayLength, printElement);
    std::cout << std::endl;

    std::string stringArray[] = {"Hello", "World", "!"};
    int stringArrayLength = sizeof(stringArray) / sizeof(stringArray[0]);

    std::cout << "Applying printString on stringArray: ";
    iter(stringArray, stringArrayLength, printString);
    std::cout << std::endl;

    std::cout << "Using lambda to multiply elements by 2 in intArray: ";
    iter(intArray, intArrayLength, printElement);
    std::cout << std::endl;

    return 0;
}
