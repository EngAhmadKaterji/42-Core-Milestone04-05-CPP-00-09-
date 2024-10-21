/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:07:43 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/06 11:57:38 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap,public ScavTrap{
 public:
 DiamondTrap();
 DiamondTrap(const std::string &name);
 DiamondTrap(const DiamondTrap &other);
 ~DiamondTrap();
 DiamondTrap &operator=(const DiamondTrap &other);
 void whoAmI();
 void attack(const std::string &target);
 private:
 std::string _name;
};

#endif