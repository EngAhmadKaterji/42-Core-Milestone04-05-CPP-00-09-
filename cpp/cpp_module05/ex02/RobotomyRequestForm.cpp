/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:49:27 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/21 13:39:14 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target):
AForm("Robotomy Request Form", 72, 45), _target(target){}
RobotomyRequestForm::~RobotomyRequestForm(){}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other):
AForm(other),_target(other._target){
 
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other){
 if (this != &other){
  AForm::operator=(other);
 }
 return *this;
}
void  RobotomyRequestForm::execute (const Bureaucrat &executor) const{
 if (!this->getSigned())
  throw AForm::NotSignedException();
 if (executor.getGrade() > this->getGradeToExecute())
  throw AForm::GradeTooLowException();
 else
 {
  static int i;
  if (i % 2 == 0)
    std::cout << _target << " has been rebotomized!" << std::endl;
  else 
    std::cout << _target << " is still alive" << std::endl;
  i++;
 }
}