/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:35:35 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/01 17:35:36 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
 private:
  std::string _name;
  Weapon& _weapon;
  HumanA();
  
 public:
  HumanA(std::string name, Weapon& weapon);
  ~HumanA();
  void attack(void) const;
};