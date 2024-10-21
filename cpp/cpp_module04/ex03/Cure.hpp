/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:39:44 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/07 13:35:49 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure:public AMateria{
 private:
  std::string _type;
 public:
 Cure();
 virtual ~Cure();
 Cure(const Cure &other);
 Cure &operator=(const Cure &other);
 std::string const & getType() const;
 virtual AMateria *clone() const;
 virtual void use(ICharacter &target);
};
#endif