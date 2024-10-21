/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:24:25 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/20 15:27:08 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include <string>

class Intern{
 public:
  Intern();
  Intern(const Intern& other);
  ~Intern();
  Intern& operator=(const Intern& other);
  AForm* makeForm(std::string name, std::string target);
};

#endif