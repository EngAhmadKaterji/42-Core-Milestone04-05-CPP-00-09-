/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:34:17 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/01 18:03:47 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void ) {
 std::cout << "I love having extra cheese for my 7XL-double-cheese-triple-pickle-special-cheese burger. I really do!" << std::endl;
}

void Harl::info( void ) {
 std::cout << "I cannot believe adding extra cheese costs more money. You didn’t put enough cheese in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void ) {
 std::cout << "I think I deserve to have some extra cheese for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ) {
 std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
  HarlMemFn complaints[] = {
  &Harl::debug,
  &Harl::info,
  &Harl::warning,
  &Harl::error
  };
 std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
 for (int i = 0; i < 4; i++)
 {
  if(level == levels[i])
  {
   (this->*complaints[i])();
   return ;
  }
 }
 if (!level.compare("exit"))
  return;
 std::cout << "Level not found" << std::endl;
}