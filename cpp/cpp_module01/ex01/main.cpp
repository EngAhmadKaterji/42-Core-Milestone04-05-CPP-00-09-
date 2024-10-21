/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:25:41 by akaterji          #+#    #+#             */
/*   Updated: 2024/08/31 16:51:43 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define N 4

int main()
{
 Zombie *zombiz = zombieHorde(N, "zombi");
 int i;

 i = -1;
 while (++i < N)
  zombiz[i].announce();
delete [] zombiz;
return 0;
}