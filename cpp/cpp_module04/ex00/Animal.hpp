/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 17:57:26 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/07 09:33:51 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
 protected:
  std::string type;
 public:
  Animal();
  Animal(std::string name);
  virtual ~Animal();
  Animal(const Animal &other);
  Animal &operator=(const Animal &other);
  
  virtual void makeSound() const;
  virtual std::string getType() const;
  void setType(std::string &type);
};
 std::ostream	&operator<<(std::ostream &stream, Animal &animal2);
#endif