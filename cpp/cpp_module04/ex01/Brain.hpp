/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 10:04:32 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/07 10:21:57 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain{
 private:
  std::string ideas[100];
 public:
  Brain();
  ~Brain();
  Brain(const Brain &other);
  Brain &operator=(const Brain &other);
  //std::string *getIdeas();
};
#endif