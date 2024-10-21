/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 08:58:02 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/07 11:03:06 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"

class Cat:public Animal{
 private:
  std::string type;
  Brain *brain;
 public:
  Cat();
  ~Cat();
  Cat (const Cat &other);
  Cat &operator=(const Cat &other);
  void makeSound() const;
  std::string getType(void) const;
};
#endif