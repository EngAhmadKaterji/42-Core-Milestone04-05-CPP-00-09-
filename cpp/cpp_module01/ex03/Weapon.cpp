/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:35:54 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/01 17:35:55 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
 this->setType(type);
}
Weapon::~Weapon() {}

const std::string& Weapon::getType(void)
{
 return (this->type);
}
void Weapon::setType(std::string type)
{
 this->type = type;
}