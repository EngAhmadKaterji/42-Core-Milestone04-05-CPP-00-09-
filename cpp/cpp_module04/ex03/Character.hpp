/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:31:34 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/07 14:13:16 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter{
 private:
  std::string name;
  AMateria* inventory[4];
 public:
 Character(std::string const &name);
 virtual ~Character();
 Character(const Character &other);
 Character &operator=(const Character &other);
 virtual std::string const & getName() const;
 virtual void equip(AMateria* m);
 virtual void unequip(int idx);
 virtual void use(int idx, ICharacter &target);
};

#endif