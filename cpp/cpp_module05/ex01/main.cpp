/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:13:02 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/17 14:57:57 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat bob("Bob", 50);
        Form taxForm("Tax Form", 40, 20);

        std::cout << bob << std::endl;
        std::cout << taxForm << std::endl;

        bob.decrementGrade();
        std::cout << "Bob's new grade: " << bob.getGrade() << std::endl;

        taxForm.beSigned(bob);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}


