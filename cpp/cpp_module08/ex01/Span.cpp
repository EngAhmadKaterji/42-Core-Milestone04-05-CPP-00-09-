#include "Span.hpp"

Span::Span(unsigned int N) : _maxSize(N) {}

Span::Span(const Span& other) : _maxSize(other._maxSize), _numbers(other._numbers) {}

Span::~Span(void) {}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        _maxSize = other._maxSize;
        _numbers = other._numbers;
    }
    return *this;
}

void Span::addNumber(int number) {
    if (_numbers.size() >= _maxSize) {
        throw SpanFullException();
    }
    _numbers.push_back(number);
}

template <typename Iterator>
void Span::addNumbers(Iterator begin, Iterator end) {
    while (begin != end) {
        addNumber(*begin);
        ++begin;
    }
}

int Span::shortestSpan() const {
    if (_numbers.size() < 2) {
        throw SpanTooFewNumbersException();
    }

    std::vector<int> sortedNumbers = _numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    int minSpan = sortedNumbers[1] - sortedNumbers[0];
    for (size_t i = 1; i < sortedNumbers.size() - 1; ++i) {
        int span = sortedNumbers[i + 1] - sortedNumbers[i];
        if (span < minSpan) {
            minSpan = span;
        }
    }

    return minSpan;
}

int Span::longestSpan() const {
    if (_numbers.size() < 2) {
        throw SpanTooFewNumbersException();
    }

    std::vector<int>::const_iterator minIt = std::min_element(_numbers.begin(), _numbers.end());
    std::vector<int>::const_iterator maxIt = std::max_element(_numbers.begin(), _numbers.end());

    return *maxIt - *minIt;
}

const char* Span::SpanException::what() const throw() {
    return "Span Exception";
}

const char* Span::SpanFullException::what() const throw() {
    return "Span is full!";
}

const char* Span::SpanTooFewNumbersException::what() const throw() {
    return "Not enough numbers to find a span!";
}

std::ostream& operator<<(std::ostream& stream, const Span& span) {
    const std::vector<int>& numbers = span.getNumbers();
    for (size_t i = 0; i < numbers.size(); ++i) {
        stream << numbers[i] << " ";
    }
    return stream;
}
