/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:22:00 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/17 16:26:48 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  PRESIDENTPARDONFORM_HPP
# define PRESIDENTPARDONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class PresidentialPardonForm: public AForm{
 private:
  const std::string _target;
 public:
    PresidentialPardonForm(const std::string &target);
    ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &other);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
    void execute (const Bureaucrat &executor) const;
};

#endif