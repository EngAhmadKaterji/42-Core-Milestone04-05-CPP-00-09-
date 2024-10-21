/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:16:07 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/06 15:55:37 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
 public:
 FragTrap();
 FragTrap(const std::string &name);
 FragTrap(const FragTrap &other);
 FragTrap& operator=(const FragTrap &other);
 ~FragTrap();
 void attack(const std::string &target);
 void highFivesGuys();
};

#endif