/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:23:10 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/07 13:42:41 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
// std::cout << "Default AMateria is constructed" << std::endl;
}
AMateria::AMateria(std::string const &type):_type(type)
{
 //std::cout << "AMateria " << type << " is born" << std::endl;
}
AMateria::~AMateria()
{
// std::cout << "AMateria destructor called" << std::endl;
}
AMateria::AMateria(AMateria const &other){
 *this = other;
// std::cout << "AMateria copy constructor called" << std::endl;
}
AMateria &AMateria::operator=(AMateria const &other){
 
 if (this !=&other)
 {
 // std::cout << "AMateria assignation operator called" << std::endl;
  _type = other._type;
 }
 return *this;
}
std::string const &AMateria::getType() const{
 return _type;
}
void AMateria::use(ICharacter &target){
 std::cout << "AMateria abstractly used on " << target.getName() << std::endl;
}
