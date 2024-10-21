/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:25:08 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/05 11:52:10 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{
private:
 Fixed _x;
 Fixed _y;

public:
 Point();
 ~Point();
 Point(const Point &src);
 Point(const Fixed& x, const Fixed& y);
 Point& operator=(const Point &other);
 Fixed getX() const;
 Fixed getY() const;
};
bool bsp(Point const a, Point const b, Point const c, Point const point);
#endif