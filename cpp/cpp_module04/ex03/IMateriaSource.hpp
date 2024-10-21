/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:36:41 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/07 13:38:45 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
 public:
 virtual ~IMateriaSource(){};
 virtual void learnMateria(AMateria*) = 0;
 virtual AMateria* createMateria(std::string const & type) = 0;
};
#endif