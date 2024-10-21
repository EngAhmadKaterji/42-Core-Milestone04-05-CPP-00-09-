/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:35:17 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/01 17:35:18 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{  
private:
 std::string _name;

public:
 Zombie();
 ~Zombie();
 void    announce(void);
 Zombie* newZombie(std::string name);
 void    setName(std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif
