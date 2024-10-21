/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:11:13 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/20 14:27:14 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() {
  //  std::cout << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade) {
   // std::cout << "Bureaucrat " << name << " is born!" << std::endl;
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {
    // std::cout << "Bureaucrat destructor called" << std::endl;
}

std::string Bureaucrat::getName() const {
    return this->_name;
}

void Bureaucrat::setName(std::string &name) {
    this->_name = name;
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}
void Bureaucrat::setGrade(int grade)
{
    this->_grade = grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat &other) {
    *this = other;
    // std::cout << "Bureaucrat copy constructor called" << std::endl;
}
void Bureaucrat::incrementGrade()
{
    if (_grade <= 1)
        throw GradeTooHighException();
    _grade--;
}
void Bureaucrat::decrementGrade(){
    if (_grade >= 150)
        throw GradeTooLowException();
    _grade++;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other) {
        // std::cout << "Bureaucrat assignation operator called" << std::endl;
        this->_name = other._name;
    }
    return *this;
}
void Bureaucrat::executeForm(AForm const &form) const {
    try {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    } catch (std::exception &e) {
        std::cout << this->getName() << " couldn’t execute " << form.getName()
                  << " because " << e.what() << std::endl;
    }
}
void Bureaucrat::signForm(AForm &form){
    try {
        form.beSigned(*this);
        std::cout << this-> _name << " signed " << form.getName() << std::endl;
    } catch (const std::exception &e) {
        std::cout << this->_name << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
    }
}
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}
const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade is too low!";
}
std::ostream &operator<<(std::ostream &stream, Bureaucrat &bureaucrat) {
    stream << "name: " << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();;
    return stream;
}
