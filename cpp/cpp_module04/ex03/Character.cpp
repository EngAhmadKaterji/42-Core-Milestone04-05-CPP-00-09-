/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:12:20 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/07 14:42:58 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(std::string const & name) : name(name) {
 for (int i = 0; i < 4; i++) {
  inventory[i] = NULL;
 }
}

Character::~Character() {
 for (int i = 0; i < 4; i++) {
  if (inventory[i] != NULL) {
   delete inventory[i];
  }
 }
}
Character::Character(const Character &other) {
 *this = other;
}
Character &Character::operator=(const Character &other) {
 if (this != &other)
 {
  for (int i = 0; i < 4; i++)
   {
    if (inventory[i] != NULL)
     delete inventory[i];
    if (other.inventory[i] != NULL)
     inventory[i] = other.inventory[i]->clone();
    else
     inventory[i] = NULL;
    }
   name = other.name;
  }
 return *this;
}
std::string const &Character::getName() const {
 return name;
}

void Character::equip(AMateria* m) {
 for (int i = 0; i < 4; i++) {
  if (inventory[i] == NULL) {
   inventory[i] = m;
  return;
  }
 }
 delete m;
}

void Character::unequip(int idx) {
 if (idx >= 0 && idx < 4 && inventory[idx] != NULL) {
  inventory[idx] = NULL;
 }
}

void Character::use(int idx, ICharacter& target) {
 if (idx >= 0 && idx < 4 && inventory[idx] != NULL) {
  inventory[idx]->use(target);
 } 
}

