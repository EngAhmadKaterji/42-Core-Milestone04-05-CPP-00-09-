/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:17:56 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/23 12:17:56 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {
    try {

        int arr[] = {10, 20, 30, 40, 50};
        std::vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));

        std::cout << "Vector elements: ";
        for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;

        
        int arr2[] = {5, 15, 25, 35, 45};
        std::list<int> lst(arr2, arr2 + sizeof(arr2) / sizeof(int));

        std::cout << "List elements: ";
        for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;
        
        std::cout << "Testing with std::vector: " << std::endl;
        std::vector<int>::iterator vecIt = easyfind(vec, 30);
        std::cout << "Found in vector: " << *vecIt << std::endl;


        std::cout << "\nTesting with std::list: " << std::endl;
        std::list<int>::iterator lstIt = easyfind(lst, 25);
        std::cout << "Found in list: " << *lstIt << std::endl;

        std::cout << "\nTesting with value not in container: " << std::endl;
        easyfind(vec, 100);
    }
    catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
