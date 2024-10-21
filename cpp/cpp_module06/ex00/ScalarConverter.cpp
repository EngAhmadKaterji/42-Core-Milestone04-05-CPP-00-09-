#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter():_char('\0'), _int(0), _float(0.0f),_double(0.0),_imp(true){}

ScalarConverter::~ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter& other):
_char(other.getChar()),_int(other.getInt()),_float(other.getFloat()),_double(other.getDouble()){

}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other){
        if (this != &other)
    {
        this->_char = other._char;
        this->_int = other._int;
        this->_float = other._float;
        this->_double = other._double;
    }
    return (*this);
}

char ScalarConverter::getChar(void) const{
return this->_char;
}
void ScalarConverter::setChar(char c){
    this->_char = c;
}

int ScalarConverter::getInt(void) const{
    return this->_int;
}
void ScalarConverter::setInt(int n){
    this->_int = n;
}

float ScalarConverter::getFloat(void) const{
    return this->_float;
}
void ScalarConverter::setFloat(float f){
    this->_float = f;
}

double ScalarConverter::getDouble(void) const{
    return this->_double;
}
void ScalarConverter::setDouble(double d){
    this->_double = d;
}

bool ScalarConverter::getImp(void) const{
    return this->_imp;
}
void ScalarConverter::setImp(bool b){
    this->_imp = b;
}

void ScalarConverter::setStr(std::string str){
    this->_str = str;
}
std::string ScalarConverter::getStr(void) const{
    return this->_str;
}

void ScalarConverter::printChar(std::ostream& stream) const{
    if (isprint(_char))
        stream << "char: '" << _char << "'" <<std::endl;
    else if (_int >= 0 && _int <= 127)
        stream << "char: Non displayable" << std::endl;
    else    
        stream <<"char: impossible" << std::endl;
}

void ScalarConverter::printInt(std::ostream& stream) const{
    if (std::isnan(_float) || std::isinf(_float))
        stream << "int: impossible" << std::endl;
    else    
        stream << "int: " << _int << std::endl;
}

void ScalarConverter::printFloat(std::ostream& stream) const {
    if (_float == static_cast<int>(_float)) {
        stream << "float: " << _float << ".0f" << std::endl;
    } else {
        stream << _float << "f" << std::endl;
    }
}

void ScalarConverter::printDouble(std::ostream& stream) const {
    if (_double == static_cast<int>(_double)) {
        stream << "double: " << _double << ".0" << std::endl;
    } else {
        stream << _double << std::endl;
    }
}

bool ScalarConverter::isChar(const std::string &literal){
    return literal.length() == 1 && !isdigit(literal[0]);
}

bool ScalarConverter::isInt(const std::string &literal){
    char *end;
    std::strtol(literal.c_str(), &end, 10);
    return *end == '\0';
}

bool ScalarConverter::isFloat(const std::string &literal){
    char *end;
    std::strtof(literal.c_str(), &end);
    return *end == 'f' && *(end + 1) == '\0';
}

bool ScalarConverter::isDouble(const std::string &literal){
    char *end;
    std::strtod(literal.c_str(), &end);
    return *end == '\0';
}

void ScalarConverter::convert(const std::string &literal){

 if (isChar(literal)){
    _char = literal[0];
    _int = static_cast<int>(_char);
    _float = static_cast<float>(_char);
    _double = static_cast<double>(_char);
} else if (isInt(literal)) {
    _int = std::atoi(literal.c_str());
    _char = static_cast<char>(_int);
    _float = static_cast<float>(_int);
    _double = static_cast<double>(_int);
} else if(isFloat(literal)) {
    _float = std::strtof(literal.c_str(), NULL);
    _int = static_cast<int>(_float);
    _char = static_cast<char>(_int);
    _double = static_cast<double>(_float);
} else if (isDouble(literal)) {
    _double = std::strtod(literal.c_str(), NULL);
    _int = static_cast<int>(_double);
    _char = static_cast<char>(_int);
    _float = static_cast<float>(_double);
} else if (literal == "nan" || literal == "nanf") {
    _float = std::numeric_limits<float>::quiet_NaN();
    _double = std::numeric_limits<double>::quiet_NaN();
} else if (literal == "-inff" || literal == "-inf") {
    _float = -std::numeric_limits<float>::infinity();
    _double = -std::numeric_limits<double>::infinity();
} else if (literal == "+inff" || literal == "+inf") {
    _float = std::numeric_limits<float>::infinity();
    _double = std::numeric_limits<double>::infinity();
} else {
    std::cerr << "Invalid literal: " << literal << std::endl;
    _imp = false;
    return;
}
}

std::ostream& operator<<(std::ostream& stream, const ScalarConverter& target){
    if (target.getImp() == false)
        return stream;
    target.printChar(stream);
    target.printInt(stream);
    target.printFloat(stream);
    target.printDouble(stream);
    return stream;
}
