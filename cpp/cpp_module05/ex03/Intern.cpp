/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:27:12 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/20 15:41:53 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){}
Intern::Intern(const Intern& other){
 *this = other;
}
Intern::~Intern(){}
Intern& Intern::operator=(const Intern& other){
(void)other;
return (*this);
}
AForm* Intern::makeForm(std::string name, std::string target){
 std::string formNames[] = {
  "shrubbery creation",
  "robotomy request",
  "presidential"
 };
 AForm* forms[] = {
  new RobotomyRequestForm(target),
  new PresidentialPardonForm(target),
  new ShrubberyCreationForm(target)
 };
 for (int i = 0; i < 3 ; i++)
 {
  if (name == formNames[i])
   {
    std::cout << "Intern creates " << name << std::endl;
    return forms[i];
   }
 }
 std::cout << "Intern cannot create " << name << " form" << std::endl;
 return NULL;
}