/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:25:41 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/05 11:59:01 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main() {
 Point a(Fixed(0), Fixed(0));
 Point b(Fixed(10), Fixed(30));
 Point c(Fixed(20), Fixed(0));
 Point p(Fixed(10), Fixed(45));

 if (bsp(a, b, c, p)) {
     std::cout << "Point is inside the triangle." << std::endl;
 } else {
     std::cout << "Point is outside the triangle." << std::endl;
 }

 return 0;
}
