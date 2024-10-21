#include "AForm.hpp"

// Correct initialization order: _gradeToSign before _gradeToExecute
AForm::AForm(const std::string name, int gradeToSign)
    : _name(name), _sign(false), _gradeToSign(gradeToSign), _gradeToExecute(0) {
    if (gradeToSign < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150)
        throw GradeTooLowException();
}

AForm::AForm(const std::string name, int gradeToSign, int gradeToExecute)
    : _name(name), _sign(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

AForm::~AForm() {}

AForm::AForm(const AForm &other)
    : _name(other.getName()), _gradeToSign(other.getGradeToSign()), _gradeToExecute(other.getGradeToExecute()) {}

AForm& AForm::operator=(const AForm &other) {
    if (this != &other) {
        _sign = other.getSigned();
    }
    return *this;
}

const std::string& AForm::getName() const {
    return _name;
}

bool AForm::getSigned() const {
    return _sign;
}

int AForm::getGradeToSign() const {
    return _gradeToSign;
}

int AForm::getGradeToExecute() const {
    return _gradeToExecute;
}

void AForm::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > _gradeToSign)
        throw AForm::GradeTooLowException();
    _sign = true;
}

const char* AForm::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}
const char* AForm::NotSignedException::what() const throw() {
    return "Form not signed";
}
std::ostream &operator<<(std::ostream &stream, AForm &Aform) {
    stream << "AForm name: " << Aform.getName() 
           << ", Grade to sign: " << Aform.getGradeToSign() 
           << ", Grade to execute: " << Aform.getGradeToExecute();
    return stream;
}
