/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:25:41 by akaterji          #+#    #+#             */
/*   Updated: 2024/08/31 16:36:01 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
 std::string name;
 
 std::cout << "Creating zombie on the stack." << std::endl;
 std::cout << "Zombie name: ";
 std::cin >> name;
 
 Zombie zombieOne(name);

 std::cout << "Creating zombie on the heap." << std::endl;
 std::cout << "Zombie name: ";
 std::cin >> name;

 Zombie* heapZombie = newZombie(name);
 heapZombie->announce();
 delete heapZombie;
 
 std::cout << "Calling randomChump." << std::endl;
 randomChump("stackZombie");
 return (0);
}