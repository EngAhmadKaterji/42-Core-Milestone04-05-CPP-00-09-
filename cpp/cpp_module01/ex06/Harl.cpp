/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:36:33 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/01 17:36:34 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug( void ) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "love having extra cheese for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
    std::cout << std::endl;
}

void    Harl::info( void ) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra cheese costs more money. You didn't put enough cheese in my burger! If you did, I wouldn't be asking for more!" << std::endl;
    std::cout << std::endl;
}

void    Harl::warning( void ) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra cheese for free. I've been coming foryears whereas you started working here since last month." << std::endl;
    std::cout << std::endl;
}

void    Harl::error( void ) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}
Harl::Harl(){
}
Harl::~Harl(){
}
void    Harl::complain( std:: string level ) {
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4 && levels[i].compare(level))
        i++ ;
    while (i <= 4)
    {
    switch (i)
    {
    case    0: 
        debug();
        break;
    case    1: 
        info();
        break;
    case    2: 
        warning();
        break;
    case    3: 
        error();
        break ;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    if (i == 3)
    break ;
    i++;
    }
}