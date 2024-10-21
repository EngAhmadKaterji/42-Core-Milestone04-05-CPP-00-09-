/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:35:58 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/06 14:48:56 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int main() {
    // Default constructor
    ScavTrap scav1;
    // Parameterized constructor
    ScavTrap scav2("Scavenger");
    // Copy constructor
    ScavTrap scav3(scav2);
    // Assignment operator
    ScavTrap scav4;
    scav4 = scav2;
    // Test attack functionality
    scav2.attack("Target1");
    scav3.attack("Target2");
    scav4.attack("Target3");
    // Test guardGate functionality
    scav2.guardGate();
    scav3.guardGate();
    scav4.guardGate();
    // Show state after attacks
    std::cout << "ScavTrap scav2 HP: " << scav2.getHitPoints() << std::endl;
    std::cout << "ScavTrap scav2 Energy: " << scav2.getEnergyPoints() << std::endl;
    // Test if destructor is called at the end of scope
    std::cout << "End of scope" << std::endl;
    return 0;
}

