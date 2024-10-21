/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 09:07:17 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/07 10:02:39 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
 this->type = "Cat";
    std::cout << "Default Cat constructor called" << std::endl;
}
Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

std::string Cat::getType() const {
    return this->type;
}

Cat::Cat(const Cat &other):Animal(other) {
    *this = other;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
       Animal::operator=(other);
        std::cout << "Cat assignation operator called" << std::endl;
        this->type = other.type;
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow Meow" << std::endl;
}