/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:19:04 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/07 14:43:04 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
  protected:
   std::string _type;
  public:
  AMateria();
  AMateria(std::string const &type);
  virtual ~AMateria()=0;
  AMateria(const AMateria &other);
  AMateria &operator=(const AMateria &other);
  std::string const & getType() const;
  virtual void use(ICharacter &target);
  virtual AMateria* clone() const = 0;
};
#endif