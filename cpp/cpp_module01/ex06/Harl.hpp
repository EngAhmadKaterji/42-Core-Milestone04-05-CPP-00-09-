/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:36:36 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/01 18:04:09 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
 private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
 public:
 Harl();
 ~Harl();
  void complain(std::string level);
};
typedef void (Harl::*HarlMemFn)(void);

#endif