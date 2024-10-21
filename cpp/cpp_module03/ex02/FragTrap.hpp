/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:16:07 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/05 18:01:46 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
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