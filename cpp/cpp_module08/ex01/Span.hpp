/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:26:00 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/23 14:26:00 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <exception>
#include <iostream>

class Span {
private:
    unsigned int _maxSize;
    std::vector<int> _numbers;
    Span(void);

public:
    Span(unsigned int N);
    Span(const Span& other);
    ~Span(void);
    Span& operator=(const Span& other);

    void addNumber(int number);

    template <typename Iterator>
    void addNumbers(Iterator begin, Iterator end);

    int shortestSpan() const;
    int longestSpan() const;

    const std::vector<int>& getNumbers() const { return _numbers; }
    size_t getSize() const { return _numbers.size(); }

    class SpanException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class SpanFullException : public SpanException {
    public:
        virtual const char* what() const throw();
    };

    class SpanTooFewNumbersException : public SpanException {
    public:
        virtual const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& stream, const Span& span);

#endif
