/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:40:40 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/07 14:07:50 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria("ice"){
 // std::cout << "Default Ice is constructed" << std::endl;
}
Ice::~Ice(){
 //std::cout << "Ice destructor called" << std::endl;
}
Ice::Ice(const Ice &other):AMateria(other){
 *this = other;
  //std::cout << "Ice copy constructor called" << std::endl;

}
Ice &Ice::operator=(const Ice &other){
 if(this !=&other)
 {
  AMateria::operator=(other);
 // std::cout << "Ice assignation operator called" << std::endl;
 }
 return *this;
}
AMateria* Ice::clone() const{
 //std::cout << "Ice clone called" << std::endl;
 return new Ice(*this);
}
void Ice::use(ICharacter &target)
{
std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

