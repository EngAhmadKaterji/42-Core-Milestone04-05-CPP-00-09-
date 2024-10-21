/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:22:11 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/25 13:22:11 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

float string_to_float(const std::string &str)
{
    std::stringstream ss(str);
    float result;
    ss>>result;
    if (ss.fail() || !ss.eof())
        throw std::invalid_argument("Invalid float format");
    return result;
}
int string_to_int(const std::string &str)
{
    std::stringstream ss(str);
    int result;
    ss >>result;
    if (ss.fail() || !ss.eof())
        throw std::invalid_argument("Invalid input: " + str);
    return result;
}
bool isValidDate(const std::string& date) {
        int year = string_to_int(date.substr(0, 4));
        int month = string_to_int(date.substr(5, 2));
        int day = string_to_int(date.substr(8, 2));
        if (year <= 2009 || year >=2025)
            return false;
        if (month <= 0 || month > 12)
            return false;
        if (day <= 0 || day > 31)
            return false;
        if (month == 2) {
            bool leapYear = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
            if ((leapYear && day > 29) || (!leapYear && day > 28)) {
                return false;
            }
        }
        if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
            return false;
        }
        return true;
}

bool isValidValue(float value)
{
    return value >= 0 && value <= 1000;
}

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: incorrect number of arguments." << std::endl;
        return 1;
    }

    BitconExchange btc;
    btc.loadDatabase("data.csv");

    std::ifstream inputFile(argv[1]);
    if (!inputFile.is_open())
    {
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }

    std::string line;
    getline(inputFile, line);
    while (getline(inputFile, line))
    {
        std::istringstream ss(line);
        std::string date;
        std::string valueStr;
        
        if (getline(ss, date, '|') && getline(ss, valueStr))
        {
            float value = string_to_float(valueStr);
            if (!isValidDate(date))
                std::cerr << "Error: bad input => " << date << std::endl;
            else if (!isValidValue(value))
                std::cerr << "Error: not a positive number." << std::endl;
            else
            {
                float rate = btc.getExchangeRate(date);
                std::cout << date << " => " << value << " = " << (rate * value) << std::endl;
            }
        }
        else
        {
            std::cerr << "Error: bad input => " << line << std::endl;
        }
    }
    return 0;
}
