/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:28:01 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/05 18:01:59 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default FragTrap constructor called" << std::endl;
}
FragTrap::FragTrap(const std::string &name):ClapTrap(name)
{
 _hitPoints = 100;
 _energyPoints = 50;
 _attackDamage = 30;
 std::cout << "FragTrap "  << name << " is constructed!" << std::endl;
}
FragTrap::FragTrap(const FragTrap& other):ClapTrap(other)
{
 std::cout << "FragTrap copy constructor called" << std::endl;
}
FragTrap& FragTrap::operator=(const FragTrap& other)
{
 if (this != &other)
 {
  ClapTrap::operator=(other);
 }
 std::cout << "FragTrap assignation operator called" << std::endl;
 return (*this);
}
FragTrap::~FragTrap()
{
 std::cout << "FragTrap destructor called" << std::endl;
}
void FragTrap::attack(const std::string& target)
{
 if (this->_hitPoints > 0 && this->_energyPoints > 0)
 {
  std::cout << "FragTrap " << _name << " attacks " << target
  << ", causing " << _attackDamage << " points of damage!" << std::endl;
  _energyPoints--;
 }
 else
 {
  std::cout << "FragTrap " << _name << " has no energy or is out of hit points!" << std::endl;
 }
}

void FragTrap::highFivesGuys()
{
 std::cout << _name << " : \"HIGH FIVES GUYS!\"" << std::endl;
}