/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:30:50 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/04 12:46:56 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
 private:
  int _fixedPointValue;
  static const int _fractionalBits = 8;

 public:
  Fixed();
  Fixed(const Fixed &other);
  ~Fixed();
 Fixed &operator=(const Fixed &other);
 
 int getRawBits(void) const;
 void setRawBits(int const raw);
}; 

#endif