/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:25:41 by akaterji          #+#    #+#             */
/*   Updated: 2024/08/31 17:06:51 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
 std::string str = "HI THIS IS BRAIN";
 std::string *stringPTR = &str;
 std::string &stringREF = str;

 std::cout << &str << ": " << str << std::endl;
 std::cout << stringPTR << ": " << *stringPTR << std::endl;
 std::cout << &stringREF << ": " << stringREF << std::endl;
 return (0);
}