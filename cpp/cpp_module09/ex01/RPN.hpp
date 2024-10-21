/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:20:43 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/25 14:25:48 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <stack>
#include <stdexcept>
#include <sstream>

class RPN {
 public:
  RPN();
  ~RPN();
  RPN(const RPN& other);
  RPN &operator=(const RPN& other);
  static int calculate(const std::string &expression);
};

#endif