/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:08:24 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/07 14:40:13 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

 MateriaSource::MateriaSource(){
  for (int i = 0; i < 4; i++)
   materiaTemplates[i] = NULL;
 }
 MateriaSource::MateriaSource(const MateriaSource &other){
  for (int i = 0; i < 4; i++)
  {
   if (other.materiaTemplates[i])
    this->materiaTemplates[i] = other.materiaTemplates[i]->clone();
   else
    this->materiaTemplates[i] = NULL;
  }
 }
 MateriaSource::~MateriaSource(){
  for (int i = 0; i < 4; i++)
   delete materiaTemplates[i];
 }
 MateriaSource  &MateriaSource::operator=(const MateriaSource &other){
  if (this != &other)
  {
   for (int i = 0; i < 4; i++)
    {
     delete this->materiaTemplates[i];
     if (other.materiaTemplates[i])
      this->materiaTemplates[i] = other.materiaTemplates[i]->clone();
     else
      this->materiaTemplates[i] = NULL;
    }
  }
  return *this;
 }
void MateriaSource::learnMateria(AMateria* m) {
 for (int i = 0; i < 4; i++) {
  if (materiaTemplates[i] == NULL) {
   materiaTemplates[i] = m->clone();
  return;
  }
 }
 delete m;
}
AMateria* MateriaSource::createMateria(std::string const &type) {
 for (int i = 0; i < 4; i++) {
  if (materiaTemplates[i] && materiaTemplates[i]->getType() == type) {
  return materiaTemplates[i]->clone();
  }
 }
 return NULL;
}
