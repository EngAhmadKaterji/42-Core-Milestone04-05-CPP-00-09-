/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 10:41:27 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/22 10:41:27 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <cstdlib>
#include <iomanip>

class ScalarConverter{
    private:
        char _char;
        int _int;
        float _float;
        double _double;
        bool _imp;
        std::string _str;
    public:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter& operator=(const ScalarConverter& other);

        char getChar(void) const;
        void setChar(char c);

        int getInt(void) const;
        void setInt(int n);

        float getFloat(void) const;
        void setFloat(float f);

        double getDouble(void) const;
        void setDouble(double d);

        bool getImp(void) const;
        void setImp(bool b);

        void setStr(std::string str);
        std::string getStr(void) const;

        bool isChar(const std::string &literal);
        bool isInt(const std::string &literal);
        bool isFloat(const std::string &literal);
        bool isDouble(const std::string &literal);
        void convert(const std::string &literal);

        void printChar(std::ostream& stream) const;
        void printInt(std::ostream& stream) const;
        void printFloat(std::ostream& stream) const;
        void printDouble(std::ostream& stream) const;
        
        class ConverterException: public std::exception{
            virtual const char* what() const throw(){return "Unknow type";}
        };
};
std::ostream& operator<<(std::ostream& out, const ScalarConverter& converter);
#endif