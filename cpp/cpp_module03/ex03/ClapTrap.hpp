/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:30:50 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/06 14:55:46 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
 protected:
  std::string _name;
  unsigned int _hitPoints;
  unsigned int _energyPoints;
  unsigned int _attackDamage;
 
 public:
  ClapTrap();
  ClapTrap(std::string name);
  ~ClapTrap();
  ClapTrap(const ClapTrap &other);
  ClapTrap &operator=(const ClapTrap &other);
 
 std::string getName() const;
 void setName(std::string& name);
 unsigned int getHitPoints() const;
 void setHitPoints(int hitpoints);
 unsigned int getEnergyPoints() const;
 void setEnergyPoints(int energypoints);
 unsigned int getAttackDamage() const;
 void setAttackDamage(int attackdamage);
 
 void attack(std::string const& target);
 void takeDamage(unsigned int amount);
 void beRepaired(unsigned int amount);
}; 
std::ostream	&operator<<(std::ostream &stream, ClapTrap &clapTrap2);
#endif