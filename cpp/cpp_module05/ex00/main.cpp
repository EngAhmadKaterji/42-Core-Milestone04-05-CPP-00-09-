/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:13:02 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/15 17:19:43 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
try{
    Bureaucrat bob("bob", 2);
    std::cout << bob << std::endl;
    
    bob.incrementGrade();
    std::cout <<"After increment: " << bob << std::endl;

    bob.incrementGrade();
    std::cout << "This will not print." << std::endl;
}catch(const std::exception &e){
    std::cerr << e.what() << std::endl;
}
try {
    Bureaucrat alice("Alice", 151);
    }
    catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

return (0);
}

