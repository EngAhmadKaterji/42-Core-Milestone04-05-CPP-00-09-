/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:36:40 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/01 17:36:41 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv){
 if (argc != 2)
  {
   return (std::cout << "Usage: ./harlFilter \"level\"\n", 1);
  }
 std::string input = argv[1];
 Harl        harl;

 harl.complain(input);

 return (0);
}