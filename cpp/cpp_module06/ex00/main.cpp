/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:30:39 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/22 11:30:39 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Usage: ./scalarconverter <literal>" << std::endl;
        return 1;
    }
    ScalarConverter a;
    a.convert(argv[1]);
    std::cout << a ;
    return 0;
}
