/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 10:23:49 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/07 10:40:46 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    std::cout << "Creating a Dog object:" << std::endl;
    Dog* originalDog = new Dog();
    std::cout << "Creating a Cat object:" << std::endl;
    Cat* originalCat = new Cat();
    
    std::cout << "\nTesting Cat copy constructor:" << std::endl;
    Cat* copiedCat = new Cat(*originalCat);
    std::cout << "\nTesting Dog copy constructor:" << std::endl;
    Dog* copiedDog = new Dog(*originalDog);
    
    std::cout << "\nTesting Cat assignment operator:" << std::endl;
    Cat anotherCat;
    anotherCat = *originalCat;
    
    std::cout << "\nTesting Dog assignment operator:" << std::endl;
    Dog anotherDog;
    anotherDog = *originalDog;

    std::cout << "\nTesting array of animals:" << std::endl; 
    Animal* animals[4];
    animals[0] = new Dog();
    animals[1] = new Dog();
    animals[2] = new Cat();
    animals[3] = new Cat();
    std::cout << "\nDeleting animals:" << std::endl;
    for (int i = 0; i < 4; ++i) {
        delete animals[i];
    }
    delete originalDog;
    delete originalCat;
    delete copiedCat;
    delete copiedDog;
    
    return 0;
}

