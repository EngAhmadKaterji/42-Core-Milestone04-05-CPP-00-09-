/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:33:00 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/05 11:57:33 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed abs(Fixed x){
 if (x < 0)
  return x * -1;
 return x;
}
static Fixed calculateArea(Point const a, Point const b, Point const c)
{
 return Fixed((a.getX() * (b.getY() - c.getY()) +
          b.getX() * (c.getY() - a.getY()) +
          c.getX() * (a.getY() - b.getY())) / 2);
}
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
 Fixed abcArea = abs(calculateArea(a, b, c));
 Fixed pabArea = abs(calculateArea(point, a, b));
 Fixed pbcArea = abs(calculateArea(point, b, c));
 Fixed pcaArea = abs(calculateArea(point, c, a));
 return (abcArea == (pabArea + pbcArea + pcaArea));
}