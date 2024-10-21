/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:36:12 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/01 17:56:19 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

class Replace
{
 private:
  std::string _inputFile;
  std::string _outputFile;

 public:
  Replace(std::string filename);
  ~Replace();
  void replace(std::string toFind, std::string replace);
};

#endif