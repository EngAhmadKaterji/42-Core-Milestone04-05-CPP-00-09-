/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:50:37 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/07 14:23:23 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria("cure"){
 // std::cout << "Default Cure is constructed" << std::endl;
}
Cure::~Cure(){
// std::cout << "Cure destructor called" << std::endl;
}
Cure::Cure(const Cure &other):AMateria(other){
 *this = other;
 // std::cout << "Cure copy constructor called" << std::endl;

}
Cure &Cure::operator=(const Cure &other){
 if(this !=&other)
 {
  AMateria::operator=(other);
 // std::cout << "Cure assignation operator called" << std::endl;
 }
 return *this;
}
AMateria* Cure::clone() const{
// std::cout << "Cure clone called" << std::endl;
 return (new Cure(*this));
}
void Cure::use(ICharacter &target)
{
 std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}