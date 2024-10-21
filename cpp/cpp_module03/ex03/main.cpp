/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 14:53:50 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/06 15:48:40 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// main.cpp

#include <iostream>
#include "DiamondTrap.hpp"

int main() {
    std::cout << "Creating DiamondTrap instances:" << std::endl;

    // Default constructor
    DiamondTrap diamond1;

    // Parameterized constructor
    DiamondTrap diamond2("Diamond");

    // Copy constructor
    DiamondTrap diamond3(diamond2);

    // Assignment operator
    DiamondTrap diamond4;
    diamond4 = diamond2;
    FragTrap test;
    ScavTrap test1;
       std::cout << test << std::endl; 
              std::cout << test1 << std::endl; 
    std::cout << diamond1.getAttackDamage() << std::endl;
    std::cout << diamond2 << std::endl;
    std::cout << diamond3 << std::endl;
    std::cout << diamond4 << std::endl;
    std::cout << "\nTesting DiamondTrap methods:" << std::endl;

    // Test attack functionality
    diamond2.attack("Target1");
    diamond3.attack("Target2");
    diamond4.attack("Target3");

    // Test whoAmI functionality
    diamond2.whoAmI();
    diamond3.whoAmI();
    diamond4.whoAmI();

    std::cout << "\nShowing state after attacks:" << std::endl;

    // Demonstrate remaining energy and hit points
    std::cout << "DiamondTrap diamond2 HP: " << diamond2.getHitPoints() << std::endl;
    std::cout << "DiamondTrap diamond2 Energy: " << diamond2.getEnergyPoints() << std::endl;

    // Test if destructor is called at the end of scope
    std::cout << "End of scope" << std::endl;

    return 0;
}
