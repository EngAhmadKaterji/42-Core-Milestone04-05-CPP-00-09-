/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:30:50 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/05 11:00:06 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <iomanip>

class Fixed
{
 private:
  int _fixedPointValue;
  static const int _fractionalBits = 8;

 public:
  Fixed(void);
  Fixed(const int number);
  Fixed(const float number);
  Fixed(const Fixed &other);
  ~Fixed();
 Fixed &operator=(const Fixed &other);
 
 int getRawBits(void) const;
 void setRawBits(int const raw);
 
 float toFloat(void) const;
 int toInt(void) const;
 
 bool operator>(const Fixed &other) const;
 bool operator<(const Fixed &other) const;
 bool operator>=(const Fixed &other) const;
 bool operator<=(const Fixed &other) const;
 bool operator==(const Fixed &other) const;
 bool operator!=(const Fixed &other) const;

 Fixed operator+(const Fixed &other) const;
 Fixed operator-(const Fixed &other) const;
 Fixed operator*(const Fixed &other) const;
 Fixed operator/(const Fixed &other) const;

 Fixed operator++(int);
 Fixed& operator++();
 Fixed operator--(int);
 Fixed& operator--();
 
 static Fixed& min(Fixed &a, Fixed &b);
 static const Fixed& min(const Fixed &a, const Fixed &b);
 static Fixed& max(Fixed &a, Fixed &b);
 static const Fixed& max(const Fixed &a, const Fixed &b);
}; 

std::ostream& operator << (std::ostream& os, const Fixed& fixed);
#endif