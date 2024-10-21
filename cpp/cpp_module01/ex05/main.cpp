/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:36:26 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/01 17:36:27 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(){
 Harl harl;
 std::string input;

 do
 {
  std::cout << "Enter a level: ";
  std::cin >> input;
  harl.complain(input);
 } while (input.compare("exit"));

 return (0);
}