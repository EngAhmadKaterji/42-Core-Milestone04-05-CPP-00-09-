/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:35:31 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/01 17:35:33 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon):_name(name),_weapon(weapon){

}
HumanA::~HumanA()
{
}
void HumanA::attack(void) const{
 if (this->_weapon.getType() != "")
  std::cout << _name << " attacks with their " << this->_weapon.getType() << std::endl;
 else
  std::cout << _name << " doesn't have a weapon to attack." << std::endl;
}