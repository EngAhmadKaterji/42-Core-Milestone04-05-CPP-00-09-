/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 09:02:25 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/07 10:48:55 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():brain(new Brain()) {
 this->type = "Dog";
    std::cout << "Default Dog constructor called" << std::endl;
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

std::string Dog::getType() const {
    return this->type;
}

Dog::Dog(const Dog &other):Animal(other),brain(new Brain(*other.brain)) {
    this->type = other.type;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
      Animal::operator=(other);
        std::cout << "Dog assignation operator called" << std::endl;
        this->type = other.type;
        delete brain;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof Woof" << std::endl;
}