/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 17:57:26 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/07 11:12:17 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
 protected:
  std::string type;
 public:
  Animal();
  Animal(std::string name);
  virtual ~Animal() = 0;
  Animal(const Animal &other);
  Animal &operator=(const Animal &other);
  
  virtual void makeSound() const = 0;
  virtual std::string getType() const;
  void setType(std::string &type);
};
 std::ostream	&operator<<(std::ostream &stream, Animal &animal2);
#endif