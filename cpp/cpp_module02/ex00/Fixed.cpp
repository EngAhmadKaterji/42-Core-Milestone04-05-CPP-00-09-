/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:39:36 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/04 12:46:07 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
 std::cout << "Default constructor called" << std::endl;
 this->_fixedPointValue = 0;
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
 std::cout << "getRawBits member function called" << std::endl;
 return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
 this->_fixedPointValue = raw;
}