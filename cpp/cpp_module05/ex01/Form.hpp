#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
  private:
    const std::string _name;
    bool _sign;
    const int _gradeToSign;
    const int _gradeToExecute;
  
  public:
    Form();
    Form(const std::string name, int gradeToSign);
    Form(const std::string name, int gradeToSign, int gradeToExecute);
    ~Form();
    Form(const Form &other);
    Form &operator=(const Form &other);

    const std::string &getName() const;
    bool getSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
  
    void beSigned(const Bureaucrat &bureaucrat);

    class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw();
    };
};

 std::ostream	&operator<<(std::ostream &stream, Form &form);

#endif
