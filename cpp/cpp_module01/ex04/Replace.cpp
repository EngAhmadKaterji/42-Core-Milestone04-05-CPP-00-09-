/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:36:09 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/01 17:58:48 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string filename) : _inputFile(filename) {
 this->_outputFile = this->_inputFile + ".replace";
}

Replace::~Replace() {
}

void Replace::replace(std::string toFind, std::string replaceStr) {
std::ifstream inputfile(this->_inputFile.c_str());
if (!inputfile.is_open()) {
    std::cerr << "Unable to open the input file: " << this->_inputFile << std::endl;
    return;
}
std::string content;
if (std::getline(inputfile, content, '\0')) {
    std::ofstream outputfile(this->_outputFile.c_str());
    if (!outputfile.is_open()) {
        std::cerr << "Unable to open the output file: " << this->_outputFile << std::endl;
        return;
    }
    std::string result;
    size_t pos = 0;
    size_t findPos;
    while ((findPos = content.find(toFind, pos)) != std::string::npos) {
        result.append(content, pos, findPos - pos);
        result.append(replaceStr);
        pos = findPos + toFind.length();
    }
    result.append(content, pos, content.length() - pos);
    outputfile << result;
} else {
    std::cerr << "Empty file found." << std::endl;
}
}

