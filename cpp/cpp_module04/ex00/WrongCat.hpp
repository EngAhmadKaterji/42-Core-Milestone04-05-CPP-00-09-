/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 09:26:02 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/07 09:53:24 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat:public WrongAnimal{
 private:
  std::string type;
 public:
 WrongCat();
 ~WrongCat();
 WrongCat(const WrongCat &other);
 WrongCat &operator=(const WrongCat &other);
 void makeSound() const;
 std::string getType(void) const;
};

#endif
