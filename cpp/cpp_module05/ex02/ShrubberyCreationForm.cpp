/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:49:41 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/20 14:52:33 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) :
AForm("ShrubberyCreationForm", 145, 137), _target(target) {}
ShrubberyCreationForm::~ShrubberyCreationForm(){}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other):
AForm(other),_target(other._target){
 
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other){
 if (this != &other){
  AForm::operator=(other);
 }
 return *this;
}
void  ShrubberyCreationForm::execute (const Bureaucrat &executor) const{
 if (this->getSigned() == false)
  throw AForm::NotSignedException();
 else if (executor.getGrade() > this->getGradeToExecute())
  throw AForm::GradeTooLowException();
std::ofstream file((this->getName() + "_shrubbery").c_str());
  if (!file.is_open() || !file.good()) {
    std::cerr << "Error: Could not create the file." << std::endl;
    return;
  }
  file << "       /\\\n";
  file << "      /  \\\n";
  file << "     /    \\\n";
  file << "    /______\\\n";
  file << "      ||||\n";
  file << "      ||||\n";
  file << std::endl;

  file << "       /\\\n";
  file << "      /  \\\n";
  file << "     /    \\\n";
  file << "    /______\\\n";
  file << "      ||||\n";
  file << "      ||||\n";
  file << std::endl;

  file.close();
  std::cout << "Shrubbery created at " << this->_target + "_shrubbery" << std::endl;
}
