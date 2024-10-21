/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:16:07 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/05 17:55:18 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
 public:
 ScavTrap();
 ScavTrap(const std::string &name);
 ScavTrap(const ScavTrap &other);
 ScavTrap& operator=(const ScavTrap &other);
 ~ScavTrap();
 void attack(const std::string &target);
 void guardGate();
};

#endif