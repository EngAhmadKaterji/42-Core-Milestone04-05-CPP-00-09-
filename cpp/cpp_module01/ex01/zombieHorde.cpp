/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:35:21 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/01 17:35:22 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
 int i;

 i = -1;
 Zombie *zombies = new Zombie[N];
 while (++i < N)
  zombies[i].setName(name);
 return (zombies);
}