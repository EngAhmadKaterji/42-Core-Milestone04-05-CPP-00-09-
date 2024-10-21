/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:38:00 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/26 18:03:29 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <ctime>
#include <time.h>

int main(int argc, const char *argv[])
{
	std::vector<int> vector_container;
	std::list<int> list_container;
	std::clock_t start;
	std::clock_t finish;

    if (argc < 2) {
        std::cerr << "Error: No numbers provided." << std::endl;
        return 1;
    }
	try {
		vector_container = build_container<std::vector<int> >(&argv[1]);
	} catch (const std::invalid_argument &e) {
		std::cout << "Error: " << e.what() <<std::endl;
		return 0;
	}
	std::cout << "Before: " << vector_container << std::endl;
	mergeInsertSort(vector_container);
	std::cout << "After: " << vector_container << std::endl;

	start = std::clock();
	vector_container = build_container<std::vector<int> >(&argv[1]);
	mergeInsertSort(vector_container);
	finish = std::clock();
	std::cout << "Time to process a range of " << vector_container.size() <<  " elements with std::vector<int>: "
		<< (float)(finish - start)/CLOCKS_PER_SEC * 1000000 << " us" << std::endl;

	start = std::clock();
	list_container = build_container<std::list<int> >(&argv[1]);
	mergeInsertSort(vector_container);
	finish = std::clock();
	std::cout << "Time to process a range of " << vector_container.size() << " elements with std::list<int>: "
		<< (float)(finish - start)/CLOCKS_PER_SEC * 1000000 << " us" << std::endl;
}