/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:39:36 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/04 14:18:27 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void):_fixedPointValue(0)
{
 std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int number):_fixedPointValue(number << _fractionalBits)
{
 std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float number): _fixedPointValue(static_cast<int>(roundf(number * (1 << _fractionalBits)))) 
{
 std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
 std::cout << "Copy constructor called" << std::endl;
 this->setRawBits(other.getRawBits());
}

Fixed& Fixed::operator=(const Fixed &other)
{
 std::cout << "Copy assignment operator called" << std::endl;
 if (this != &other)
  this->_fixedPointValue = other.getRawBits();
 return (*this);
}

Fixed::~Fixed()
{
 std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
 //std::cout << "getRawBits member function called" << std::endl;
 return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
 this->_fixedPointValue = raw;
}
float Fixed::toFloat(void) const 
{
 return static_cast<float>(this->getRawBits()) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const{
 return this->_fixedPointValue >> _fractionalBits;
}
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
 os << fixed.toFloat();
 return os;
}
