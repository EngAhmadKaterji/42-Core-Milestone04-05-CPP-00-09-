/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:23:41 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/20 14:36:40 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target):
AForm("PresidentialPardonForm", 25, 5), _target(target){}
PresidentialPardonForm::~PresidentialPardonForm(){}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other):
AForm(other),_target(other._target){
 
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other){
 if (this != &other){
  AForm::operator=(other);
 }
 return *this;
  
}
void  PresidentialPardonForm::execute (const Bureaucrat &executor) const{
 if (!this->getSigned())
  throw AForm::NotSignedException();
 if (executor.getGrade() > this->getGradeToExecute())
  throw AForm::GradeTooLowException();
 else
  std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}