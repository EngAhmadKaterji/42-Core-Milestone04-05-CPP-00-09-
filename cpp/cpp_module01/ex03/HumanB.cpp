/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:35:38 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/01 17:35:39 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name){
 this->_weapon = NULL;
}
HumanB::~HumanB(){

}
void HumanB::setWeapon(Weapon& weapon)
{
 this->_weapon = &weapon;
}
void HumanB::attack(void) const {
 if (this->_weapon != NULL && this->_weapon->getType() != "")
  std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;
 else
  std::cout << _name << " doesn't have a weapon to attack. " << std::endl;
}