/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:12:09 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/21 14:14:13 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, int gradeToSign)
    : _name(name), _sign(false), _gradeToSign(gradeToSign), _gradeToExecute(0) {
    if (gradeToSign < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150)
        throw GradeTooLowException();
}

Form::Form(const std::string name, int gradeToSign, int gradeToExecute)
    : _name(name), _sign(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

Form::~Form() {}

Form::Form(const Form &other)
    : _name(other.getName()), _gradeToSign(other.getGradeToSign()), _gradeToExecute(other.getGradeToExecute()) {}

Form& Form::operator=(const Form &other) {
    if (this != &other) {
        _sign = other.getSigned();
    }
    return *this;
}

const std::string& Form::getName() const {
    return _name;
}

bool Form::getSigned() const {
    return _sign;
}

int Form::getGradeToSign() const {
    return _gradeToSign;
}

int Form::getGradeToExecute() const {
    return _gradeToExecute;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > _gradeToSign)
        throw Form::GradeTooLowException();
    _sign = true;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

std::ostream &operator<<(std::ostream &stream, Form &form) {
    stream << "Form name: " << form.getName() 
           << ", Grade to sign: " << form.getGradeToSign() 
           << ", Grade to execute: " << form.getGradeToExecute();
    return stream;
}
