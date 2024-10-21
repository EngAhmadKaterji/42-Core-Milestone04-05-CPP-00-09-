/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:31:42 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/07 14:06:54 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice:public AMateria{
 private:
  std::string _type;
 public:
 Ice();
 virtual ~Ice();
 Ice(const Ice &other);
 Ice &operator=(const Ice &other);
 std::string const & getType() const;
 virtual AMateria* clone() const;
 virtual void use(ICharacter &target);
};
#endif