/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:35:58 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/01 17:35:59 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
 private:
 std::string type;

 public:
 Weapon(std::string type);
 ~Weapon();
 void setType(std::string type);
 const std::string& getType();
};

#endif