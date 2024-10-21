/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:34:38 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/01 17:34:39 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string name)
{
 this->_name = name;
}
Zombie::~Zombie()
{
 std::cout << this->_name << " is destroyed." << std::endl;
}
void Zombie::announce(void)
{
 std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}