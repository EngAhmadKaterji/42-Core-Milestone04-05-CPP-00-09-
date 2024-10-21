/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 17:57:26 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/20 14:34:39 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>

class AForm;

class Bureaucrat
{
 private:
  std::string _name;
  int _grade;
 public:
  Bureaucrat();
  Bureaucrat(std::string name, int grade);
  ~Bureaucrat();
  Bureaucrat(const Bureaucrat &other);
  Bureaucrat &operator=(const Bureaucrat &other);

  std::string getName() const;
  void setName(std::string &name);
  int getGrade() const;
  void setGrade(int grade);
  
  void incrementGrade();
  void decrementGrade();
  void        executeForm( const AForm& form ) const; 
  void signForm(AForm& form);
  class GradeTooHighException:public std::exception{
    public:
    const char* what() const throw();
  };
  class GradeTooLowException:public std::exception{
    public:
    const char* what() const throw();
  };

};

 std::ostream	&operator<<(std::ostream &stream, Bureaucrat &Bureaucrat2);

#endif