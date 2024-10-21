/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:30:31 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/06 14:42:07 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime> 
#include "ClapTrap.hpp"

// int main()
// {
//  std::srand(std::time(0));
//  std::cout << "---- CLAPTRAP BATTLE ----\n" << std::endl;
//  ClapTrap ClaptrapA("ClaptrapA");
//  ClapTrap ClaptrapB("ClaptrapB");
//  ClaptrapA.setAttackDamage(3);
//  ClaptrapB.setAttackDamage(4);
//  std::cout << ClaptrapA << std::endl;
//  std::cout << ClaptrapB << std::endl;
//  while (ClaptrapA.getHitPoints() > 0 && ClaptrapB.getHitPoints() > 0)
//  {
//   int choiceA = std::rand() % 2;
//   int choiceB = std::rand() % 2;
//   if (ClaptrapA.getEnergyPoints() > 0)
//   {
//     if (choiceA == 0)
//     {
//      std::cout << "\nClaptrapA attacks ClaptrapB!" << std::endl;
//      ClaptrapA.attack("ClaptrapB");
//      ClaptrapB.takeDamage(ClaptrapA.getAttackDamage());
//     }
//     else
//     {
//      std::cout << "\nClaptrapA repairs itself!" << std::endl;
//      ClaptrapA.beRepaired(5);
//     }
//  }
//  else
//  {
//     std::cout << "\nClaptrapA is out of energy!" << std::endl;
//  }
//  if (ClaptrapB.getHitPoints() <= 0)
//  {
//     std::cout << "\nClaptrapB has been destroyed!" << std::endl;
//     break;
//  }
//  if (ClaptrapB.getEnergyPoints() > 0)
//  {
//     if (choiceB == 0)
//     {
//         std::cout << "\nClaptrapB attacks ClaptrapA!" << std::endl;
//         ClaptrapB.attack("ClaptrapA");
//         ClaptrapA.takeDamage(ClaptrapB.getAttackDamage());
//     }
//     else
//     {
//         std::cout << "\nClaptrapB repairs itself!" << std::endl;
//         ClaptrapB.beRepaired(5);
//     }
//  }
//  else
//  {
//     std::cout << "\nClaptrapB is out of energy!" << std::endl;
//  }
//  if (ClaptrapA.getHitPoints() <= 0)
//  {
//     std::cout << "\nClaptrapA has been destroyed!" << std::endl;
//     break;
//  }
//  std::cout << "\nCurrent Status:" << std::endl;
//  std::cout << ClaptrapA << std::endl;
//  std::cout << ClaptrapB << std::endl;
//  }
//  std::cout << "\nThe battle is over!" << std::endl;
//  return 0;
// }
int main()
{
    // Create ClapTrap objects using different constructors
    ClapTrap defaultClapTrap;
    ClapTrap namedClapTrap("ClapTrapNamed");
    ClapTrap copyClapTrap(namedClapTrap);
    // Display initial states
    std::cout << "Initial States:\n";
    std::cout << defaultClapTrap << std::endl;
    std::cout << namedClapTrap << std::endl;
    std::cout << copyClapTrap << std::endl;
    // Modify attributes and test setters
    std::string str = "DefaultClapTrap";
    defaultClapTrap.setName(str);
    defaultClapTrap.setHitPoints(20);
    defaultClapTrap.setEnergyPoints(15);
    defaultClapTrap.setAttackDamage(5);
    // Display modified states
    std::cout << "\nAfter modifying defaultClapTrap:\n";
    std::cout << defaultClapTrap << std::endl;
    // Test attack, damage, and repair
    std::cout << "\nTesting attack, damage, and repair:\n";
    defaultClapTrap.attack("target1");
    namedClapTrap.takeDamage(defaultClapTrap.getAttackDamage());
    std::cout << namedClapTrap << std::endl;
    defaultClapTrap.attack("target2");
    namedClapTrap.takeDamage(defaultClapTrap.getAttackDamage());
    std::cout << namedClapTrap << std::endl;
    namedClapTrap.beRepaired(10);
    std::cout << namedClapTrap << std::endl;
    // Test edge cases for damage and repair
    std::cout << "\nTesting edge cases:\n";
    namedClapTrap.takeDamage(50); // Ensure it handles destruction
    namedClapTrap.beRepaired(5);  // Should not be able to repair if destroyed
    std::cout << namedClapTrap << std::endl;
    // Test assignment operator
    ClapTrap assignedClapTrap;
    assignedClapTrap = defaultClapTrap;
    std::cout << "\nAfter assignment:\n";
    std::cout << defaultClapTrap << std::endl;
    std::cout << assignedClapTrap << std::endl;
    // Test with different energy and hit points scenarios
    ClapTrap energyTest("EnergyTest");
    energyTest.setEnergyPoints(1);
    energyTest.attack("target3"); // Should succeed
    energyTest.attack("target4"); // Should fail due to lack of energy
    std::cout << "\nEnergyTest status:\n";
    std::cout << energyTest << std::endl;
    return 0;
}

