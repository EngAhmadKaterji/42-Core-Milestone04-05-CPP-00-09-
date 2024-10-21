/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:11:13 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/07 11:02:57 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

Animal::Animal() {
    std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(std::string type): type(type) {
    std::cout << "Animal " << type << " is born!" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const {
    return this->type;
}

void Animal::setType(std::string &type) {
    this->type = type;
}

Animal::Animal(const Animal &other) {
    *this = other;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        std::cout << "Animal assignation operator called" << std::endl;
        this->type = other.type;
    }
    return *this;
}

std::ostream &operator<<(std::ostream &stream, Animal &animal) {
    stream << "Type: " << animal.getType();
    return stream;
}
void Animal::makeSound() const {
    std::cout << "Animal makes a generic sound" << std::endl;
}