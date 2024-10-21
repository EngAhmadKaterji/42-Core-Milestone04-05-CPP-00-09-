/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:37:52 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/27 14:22:06 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <vector>
# include <list>
# include <iostream>
# include <sstream>
# include <ostream>

template <typename Container>
class PmergeMe
{
	private:
		Container _container;

	public:

		PmergeMe() {}
		
		PmergeMe(const Container &container) : _container(container) {}

		~PmergeMe() {}
		PmergeMe(const PmergeMe &other) : _container(other._container) {}
		PmergeMe &operator=(const PmergeMe &other)
		{
			if (this != &other)
				_container = other._container;
			return *this;
		}
		void setContainer(const Container &container)
		{
			_container = container;
		}

		Container getContainer() const
		{
			return _container;
		}
};


template <typename Container>
bool find_duplicate(const Container &nums, int new_value)
{
	for (typename Container::const_iterator it = nums.begin(); it != nums.end(); ++it)
	{
		if (*it == new_value)
			return true;
	}
	return false;
}
template <typename Container>
void mergeInsertSort(Container &nums)
{
	if (nums.size() <= 1)
		return ;

	Container left(nums.begin(), nums.begin() + nums.size() / 2);
	Container right(nums.begin() + nums.size() / 2, nums.end());

	mergeInsertSort(left);
	mergeInsertSort(right);

	typename Container::iterator leftIt = left.begin();
	typename Container::iterator rightIt = right.begin();
	typename Container::iterator numsIt = nums.begin();

	while (leftIt != left.end() && rightIt != right.end())
	{
		if (*leftIt < *rightIt)
			*numsIt++ = *leftIt++;
		else
			*numsIt++ = *rightIt++;
	}

	while (leftIt != left.end())
	{
		*numsIt++ = *leftIt++;
	}
	while (rightIt != right.end())
	{
		*numsIt++ = *rightIt++;
	}
}

template <typename Container>
Container build_container(const char **args)
{
	Container container;
	for (int i = 0; args[i]; ++i)
	{
		int entry;
		std::stringstream ss(args[i]);
		ss >> entry;
        if (ss.fail())
            throw std::invalid_argument("Invalid number");
        else if (entry < 0)
            throw std::invalid_argument("Negative numbers are invalid");
        else if (find_duplicate(container, entry))
            throw std::invalid_argument("Duplicate numbers are invalid");
		container.push_back(entry);
	}
	return container;
}


std::ostream &operator<<(std::ostream &os, const std::vector<int> &container);

std::ostream &operator<<(std::ostream &os, const std::list<int> &container);

#endif