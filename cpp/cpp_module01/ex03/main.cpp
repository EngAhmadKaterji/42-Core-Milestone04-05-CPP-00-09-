/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:25:41 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/01 17:35:47 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
 {
  Weapon club = Weapon("crude spiked club");
  HumanA bob("Bob", club);
  bob.attack();
  club.setType("some other type of club");
  bob.attack();
 }
 {
  Weapon club = Weapon("crude spiked club");
  HumanB jim("Jim");
  jim.setWeapon(club);
  jim.attack();
  club.setType("some other type of club");
  jim.attack();
 }

 return 0;
}