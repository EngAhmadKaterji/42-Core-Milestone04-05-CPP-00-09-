/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:39:21 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/07 13:10:00 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource{
 private:
  AMateria* materiaTemplates[4];
 public:
 MateriaSource();
 MateriaSource(const MateriaSource &other);
 ~MateriaSource();
 MateriaSource &operator=(const MateriaSource &other);
 void learnMateria(AMateria* m);
 AMateria* createMateria(std::string const &type);
};

#endif