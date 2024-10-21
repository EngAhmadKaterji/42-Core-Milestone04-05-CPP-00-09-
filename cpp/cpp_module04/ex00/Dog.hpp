/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 08:58:02 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/07 09:50:25 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog:public Animal{
 private:
  std::string type;
 public:
  Dog();
  ~Dog();
  Dog (const Dog &other);
  Dog &operator=(const Dog &other);
  void makeSound() const;
  std::string getType(void) const;
};
#endif