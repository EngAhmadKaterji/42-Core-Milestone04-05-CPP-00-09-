/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:19:26 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/25 13:19:26 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <fstream>
#include <sstream>
#include <iostream>

class BitconExchange{
    private: 
        std::map<std::string, float> exchangeRates;
    public:
        BitconExchange();
        ~BitconExchange();
        BitconExchange(const BitconExchange& other);
        BitconExchange &operator=(const BitconExchange& other);

        void setExchagneRates(std::string data, float value);
        void loadDatabase(const std::string& dbFile);
        float getExchangeRate(const std::string& date) const;
};

#endif