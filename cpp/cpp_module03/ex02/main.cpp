/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 14:51:22 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/06 14:51:51 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// main.cpp

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    std::cout << "Creating ScavTrap instances:" << std::endl;
    // Default constructor
    ScavTrap scav1;
    // Parameterized constructor
    ScavTrap scav2("Scavenger");
    // Copy constructor
    ScavTrap scav3(scav2);
    // Assignment operator
    ScavTrap scav4;
    scav4 = scav2;
    std::cout << "\nCreating FragTrap instances:" << std::endl;
    // Default constructor
    FragTrap frag1;
    // Parameterized constructor
    FragTrap frag2("Fraggy");
    // Copy constructor
    FragTrap frag3(frag2);
    // Assignment operator
    FragTrap frag4;
    frag4 = frag2;
    std::cout << "\nTesting ScavTrap methods:" << std::endl;
    // Test attack functionality
    scav2.attack("Target1");
    scav3.attack("Target2");
    scav4.attack("Target3");
    // Test guardGate functionality
    scav2.guardGate();
    scav3.guardGate();
    scav4.guardGate();
    std::cout << "\nTesting FragTrap methods:" << std::endl;
    // Test attack functionality
    frag2.attack("TargetA");
    frag3.attack("TargetB");
    frag4.attack("TargetC");
    // Test highFivesGuys functionality
    frag2.highFivesGuys();
    frag3.highFivesGuys();
    frag4.highFivesGuys();
    std::cout << "\nShowing state after attacks:" << std::endl;
    // Demonstrate remaining energy and hit points
    std::cout << "ScavTrap scav2 HP: " << scav2.getHitPoints() << std::endl;
    std::cout << "ScavTrap scav2 Energy: " << scav2.getEnergyPoints() << std::endl;
    std::cout << "FragTrap frag2 HP: " << frag2.getHitPoints() << std::endl;
    std::cout << "FragTrap frag2 Energy: " << frag2.getEnergyPoints() << std::endl;
    // Test if destructor is called at the end of scope
    std::cout << "End of scope" << std::endl;
    return 0;
}
