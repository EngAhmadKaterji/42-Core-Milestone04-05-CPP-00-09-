/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:33:55 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/23 11:33:55 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <cassert>
#include <cstdlib>

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

int main() {

    Array<int> arr1;
    std::cout << "arr1 size: " << arr1.getSize() << std::endl;
    assert(arr1.getSize() == 0);

    Array<int> arr2(5);
    std::cout << "arr2 size: " << arr2.getSize() << std::endl;
    assert(arr2.getSize() == 5);

    for (unsigned int i = 0; i < arr2.getSize(); i++) {
        arr2[i] = i * 2;
        std::cout << "arr2[" << i << "] = " << arr2[i] << std::endl;
    }

    Array<int> arr3(arr2);
    std::cout << "arr3 (copy of arr2) size: " << arr3.getSize() << std::endl;
    assert(arr3.getSize() == arr2.getSize());

    arr3[0] = 100;
    std::cout << "arr3[0] after modification: " << arr3[0] << std::endl;
    std::cout << "arr2[0] should remain the same: " << arr2[0] << std::endl;
    assert(arr2[0] != arr3[0]);

    Array<int> arr4 = arr2;
    std::cout << "arr4 (assigned from arr2) size: " << arr4.getSize() << std::endl;
    assert(arr4.getSize() == arr2.getSize());

    try {
        arr4[10] = 42;
    } catch (const std::out_of_range& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    std::cout << "All tests passed!" << std::endl;

    return 0;
}
