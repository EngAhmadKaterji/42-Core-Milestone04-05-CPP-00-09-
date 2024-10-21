/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:27:37 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/05 11:58:26 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void):_x(0),_y(0){
}
Point::Point(const Fixed& x, const Fixed& y):_x(x),_y(y){
}
Point::Point(const Point &src):_x(src._x),_y(src._y){
}
Point::~Point(){
}
Point& Point::operator=(const Point &other)
{
 if (this != &other)
 {
  this->_x = other.getX();
  this->_y = other.getY();
 }
 return *this;
}
Fixed Point::getX(void) const{
 return this->_x;
}
Fixed Point::getY(void) const{
 return this->_y;
}