/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:39:36 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/06 14:37:42 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):_name(name),_hitPoints(10),_energyPoints(10),_attackDamage(0){
 std::cout << "ClapTrap " << name << " is born!" << std::endl;
}
ClapTrap::~ClapTrap()
{
 std::cout << "ClapTrap destructor called" << std::endl;
}
ClapTrap::ClapTrap():_name(),_hitPoints(10),_energyPoints(10),_attackDamage(0){
 std::cout << "Default ClapTrap constructor called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &other)
{
 *this = other;
 std::cout << "ClapTrap copy constructor called" << std::endl;
}
std::string ClapTrap::getName() const
{
 return (_name);
}
void ClapTrap::setName(std::string &name)
{
 this->_name = name;
}
unsigned int ClapTrap::getHitPoints() const
{
 return (_hitPoints);
}

void ClapTrap::setHitPoints(int hitpoints)
{
 this->_hitPoints = hitpoints;
}
unsigned int ClapTrap::getEnergyPoints() const
{
 return (_energyPoints);
}
void ClapTrap::setEnergyPoints(int energypoints)
{
 this->_energyPoints = energypoints;
}
unsigned int ClapTrap::getAttackDamage() const {
    return _attackDamage;
}

void ClapTrap::setAttackDamage(int attackdamage){
 this->_attackDamage = attackdamage;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
 if (this != &other)
 {
  std::cout << "ClapTarp assignation operator called" << std::endl;
  this->_name = other._name;
  this->_hitPoints = other._hitPoints;
  this->_energyPoints = other._energyPoints;
  this->_attackDamage = other._attackDamage;
 }
 return (*this);
}
std::ostream &operator<<(std::ostream &stream, ClapTrap &claptrap)
{
 stream << "Name: " << claptrap.getName() << \
 ", Hitpoints: " << claptrap.getHitPoints() << \
 " | Energy Points: " << claptrap.getEnergyPoints() << \
 " | Attack Points: " << claptrap.getAttackDamage();
 return (stream);
}

void ClapTrap::attack(const std::string& target) {
    if (_hitPoints > 0 && _energyPoints > 0) {
        std::cout << "ClapTrap " << _name << " attacks " << target
                  << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints -= 1;
    } else if (_energyPoints <= 0) {
        std::cout << "ClapTrap " << _name << " has no energy to attack!" << std::endl;
    } else {
        std::cout << "ClapTrap " << _name << " is out of hit points and cannot attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_hitPoints > 0) {
        if (_hitPoints <= amount) {
            _hitPoints = 0;
            std::cout << "ClapTrap " << _name << " has taken " << amount
                      << " points of damage and is now destroyed!" << std::endl;
        } else {
            _hitPoints -= amount;
            std::cout << "ClapTrap " << _name << " takes " << amount
                      << " points of damage!" << std::endl;
        }
    } else {
        std::cout << "ClapTrap " << _name << " is already destroyed!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_hitPoints > 0 && _energyPoints > 0) {
        _hitPoints += amount;
        _energyPoints -= 1;
        std::cout << "ClapTrap " << _name << " repairs itself, regaining " << amount
                  << " hit points!" << std::endl;
    } else if (_energyPoints <= 0) {
        std::cout << "ClapTrap " << _name << " has no energy to repair!" << std::endl;
    } else {
        std::cout << "ClapTrap " << _name << " is out of hit points and cannot repair!" << std::endl;
    }
}
