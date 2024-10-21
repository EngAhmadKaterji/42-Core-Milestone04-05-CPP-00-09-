/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 09:07:17 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/07 10:49:47 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():brain(new Brain()) {
 this->type = "Cat";
    std::cout << "Default Cat constructor called" << std::endl;
}
Cat::~Cat() {
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

std::string Cat::getType() const {
    return this->type;
}

Cat::Cat(const Cat &other):Animal(other),brain(new Brain(*other.brain)) {
    this->type = other.type;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
       Animal::operator=(other);
        std::cout << "Cat assignation operator called" << std::endl;
        this->type = other.type;
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow Meow" << std::endl;
}