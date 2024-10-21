/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:04:06 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/22 13:04:06 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base* generate() {
   std::srand(static_cast<unsigned int>(std::time(0)));
    int random = std::rand() % 3;

    switch (random) {
    case 0: 
        std::cout << "A class generated" << std::endl;
        return new A();
    case 1: 
        std::cout << "B class generated" << std::endl;
        return new B();
    case 2:
        std::cout << "C class generated" << std::endl;
         return new C();
    default: return NULL;
    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "Identify as A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Identify as B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Identify as C" << std::endl;
}

void identify(Base& p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "Identify as A" << std::endl;
        return;
    }
    catch (std::exception &exception) {}
    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "Identify as B" << std::endl;
        return;
    }
    catch (std::exception &exception) {}
    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "Identify as C" << std::endl;
        return;
    }
    catch (std::exception &exception) {}
}
