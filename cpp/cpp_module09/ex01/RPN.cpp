/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:05:05 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/27 14:05:06 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int string_to_int(const std::string &str)
{
    std::stringstream ss(str);
    int result;
    ss >>result;
    if (ss.fail() || !ss.eof())
        throw std::invalid_argument("Invalid input: " + str);
    return result;
}

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN &other) {
    (void) other;
}

RPN& RPN::operator=(const RPN &other) {
    if (this != &other) {
    }
    return *this;
}

int RPN::calculate(const std::string &expression) {
    std::stack<int> stack;
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token) {
        if (std::isdigit(token[0])) {
            stack.push(string_to_int(token));
        } else {
            if (stack.size() < 2) {
                throw std::runtime_error("Error: Not enough operands");
            }
            int b = stack.top(); stack.pop();
            int a = stack.top(); stack.pop();
            switch (token[0]) {
                case '+':
                    stack.push(a + b);
                    break;
                case '-':
                    stack.push(a - b);
                    break;
                case '*':
                    stack.push(a * b);
                    break;
                case '/':
                    if (b == 0) throw std::runtime_error("Error: Division by zero");
                    stack.push(a / b);
                    break;
                default:
                    throw std::runtime_error("Error: Unknown operator");
            }
        }
    }

    if (stack.size() != 1) {
        throw std::runtime_error("Error: Too many operands");
    }

    return stack.top();
}
