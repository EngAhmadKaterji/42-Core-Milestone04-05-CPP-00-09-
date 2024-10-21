/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:36:01 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/01 17:36:02 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char **argv)
{
 if (argc != 4)
 {
  std::cerr << "Usage: ./replace <filename> <to_find> <replace>." << std::endl;
  return (1);
 }
 else
 {
  Replace repl(argv[1]);
  repl.replace(argv[2], argv[3]);
 }
 return (0);
}