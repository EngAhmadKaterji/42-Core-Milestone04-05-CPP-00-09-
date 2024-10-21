#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
  private:
    const std::string _name;
    bool _sign;
    const int _gradeToSign;
    const int _gradeToExecute;
  
  public:
    AForm();
    AForm(const std::string name, int gradeToSign);
    AForm(const std::string name, int gradeToSign, int gradeToExecute);
    virtual ~AForm();
    AForm(const AForm &other);
    AForm &operator=(const AForm &other);

    const std::string &getName() const;
    bool getSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    void executeForm(const AForm& form) const;
    void signForm(AForm& form);
    void beSigned(const Bureaucrat &bureaucrat);
    virtual void execute(const Bureaucrat &executor) const = 0;
    class GradeTooHighException : public std::exception {
    public:
       virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual  const char* what() const throw();
    };
    class NotSignedException : public std::exception {
    public:
       virtual const char* what() const throw();
    };
};

 std::ostream	&operator<<(std::ostream &stream, AForm &aform);

#endif
