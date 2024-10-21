/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:37:56 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/26 17:49:22 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::ostream &operator<<(std::ostream &os, const std::vector<int> &container){
	for (std::vector<int>::const_iterator it = container.begin(); it != container.end(); it++)
	{
		os << *it << " ";
	}
	return os;
}

std::ostream &operator<<(std::ostream &os, const std::list<int> &container){
	for (std::list<int>::const_iterator it = container.begin(); it != container.end(); it++)
	{
		os << *it << " ";
	}
	return os;
}