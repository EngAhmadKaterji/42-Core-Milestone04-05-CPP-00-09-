/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:28:01 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/05 17:54:56 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default SCAVTRAP constructor called" << std::endl;
}
ScavTrap::ScavTrap(const std::string &name):ClapTrap(name)
{
 _hitPoints = 100;
 _energyPoints = 50;
 _attackDamage = 20;
 std::cout << "ScavTrap "  << name << " is constructed!" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& other):ClapTrap(other)
{
 std::cout << "ScavTrap copy constructor called" << std::endl;
}
ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
 if (this != &other)
 {
  ClapTrap::operator=(other);
 }
 std::cout << "ScavTrap assignation operator called" << std::endl;
 return (*this);
}
ScavTrap::~ScavTrap()
{
 std::cout << "ScavTrap destructor called" << std::endl;
}
void ScavTrap::attack(const std::string& target)
{
 if (this->_hitPoints > 0 && this->_energyPoints > 0)
 {
  std::cout << "ScavTrap " << _name << " attacks " << target
  << ", causing " << _attackDamage << " points of damage!" << std::endl;
  _energyPoints--;
 }
 else
 {
  std::cout << "ScavTrap " << _name << " has no energy or is out of hit points!" << std::endl;
 }
}

void ScavTrap::guardGate()
{
 std::cout << "ScavTrap " << _name << " is now in Gatekeeper mode!" << std::endl;
}