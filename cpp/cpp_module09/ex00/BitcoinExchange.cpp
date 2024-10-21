/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:19:09 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/26 16:45:20 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitconExchange::BitconExchange(){}

BitconExchange::~BitconExchange(){}

BitconExchange::BitconExchange(const BitconExchange& other){
    *this = other;
}
BitconExchange &BitconExchange::operator=(const BitconExchange& other){
    this->exchangeRates = other.exchangeRates;
    return *this;
}

void BitconExchange::setExchagneRates(std::string data, float value){
    this->exchangeRates.insert(std::make_pair(data, value));
}

void BitconExchange::loadDatabase(const std::string& dbFile)
{
    std::ifstream file(dbFile.c_str());
    if (!file.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }
    std::string line;
    getline(file, line);
    while (getline(file, line)) {
        std::istringstream ss(line);
        std::string date;
        float rate;
        if (getline(ss, date, ',') && ss >> rate) {
            exchangeRates[date] = rate;
        }
    }
    file.close();
}


float BitconExchange::getExchangeRate(const std::string& date) const {
    std::map<std::string, float>::const_iterator it = exchangeRates.lower_bound(date);
    if (it != exchangeRates.end() && it->first == date)
        return it->second;
    if (it != exchangeRates.begin()) {
        --it;
        return it->second;
    }
    return 0.0;
}
