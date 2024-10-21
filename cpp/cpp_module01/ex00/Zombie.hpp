/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:35:04 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/01 17:44:32 by akaterji         ###   ########.fr       */
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
 Zombie( std::string name );
 ~Zombie();
 void    announce( void );
};

Zombie  *newZombie( std::string name );
void    randomChump( std::string name );

#endif
