/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:25:41 by akaterji          #+#    #+#             */
/*   Updated: 2024/08/27 11:38:10 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int main(int argc, char **argv)
{
 int i;
 int j;
 
 i = 0;
 if (argc == 1)
 {
  std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
 }
 else
 {
  while (argv[++i])
  {
   j = -1;
   while (argv[i][++j])
   {
    std::cout << static_cast<char>(std::toupper(argv[i][j]));
   }
  }
  std::cout << std::endl;
 }
}
