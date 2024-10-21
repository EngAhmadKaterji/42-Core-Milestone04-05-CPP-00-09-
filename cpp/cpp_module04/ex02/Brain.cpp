/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 10:09:39 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/07 10:33:00 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Default Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
     ideas[i] = "Random Idea";
}


Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &other) {
    *this = other;
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
    if (this != &other) {
        std::cout << "Brain assignation operator called" << std::endl;
        for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
    }
    return *this;
}