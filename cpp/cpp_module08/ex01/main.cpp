/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:26:47 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/23 14:26:47 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main() {
    // Create a Span object with a maximum size of 10
    Span sp(10);

    // Adding single numbers using addNumber
    sp.addNumber(6);
    sp.addNumber(3);

    // Using a vector to add a range of numbers (C++98 style)
    int numbersArray[] = {15, 2, 20, 1, 13, 100};
    std::vector<int> numbers(numbersArray, numbersArray + sizeof(numbersArray) / sizeof(int));

    // Using addNumbers to add numbers from the vector to the Span
    sp.addNumbers(numbers.begin(), numbers.end());

    // Displaying the contents of the Span
    std::cout << "Span contents: " << sp << std::endl;

    // Finding and displaying the shortest and longest span
    try {
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
