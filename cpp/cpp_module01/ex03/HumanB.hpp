/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:35:42 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/01 17:35:43 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
 private:
  std::string _name;
  Weapon* _weapon;

 public:
  HumanB(std::string name);
  ~HumanB();
  void attack() const;
  void setWeapon(Weapon& weapon);

};