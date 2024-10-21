/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaterji <akaterji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:24:11 by akaterji          #+#    #+#             */
/*   Updated: 2024/09/23 11:39:54 by akaterji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array{
 private:
  T* data;
  unsigned int _size;
 public:
  Array():data(NULL),_size(0){}
  Array(unsigned int n):_size(n){
   data = new T[n]();
  }
  Array(const Array& other):_size(other._size){
   data = new T[other._size]();
   for (unsigned int i = 0; i < other._size; i++)
    data[i] = other.data[i];
  }
  Array& operator=(const Array& other){
   if (this != &other){
    delete[] data;
    _size = other._size;
    data = new T[_size]();
    for (unsigned int i = 0; i < _size; i++)
     data[i] = other.data[i];
   }
   return *this;
  }
  ~Array(){
   delete[] data;
  }
  T& operator[](unsigned int index){
   if (index >= _size)
    throw std::out_of_range("Index out of bounds");
   return data[index];
  }
  const T& operator[](unsigned int index) const{
   if (index >= _size)
    throw std::out_of_range("Index out of bounds");
   return data[index];
  }
  unsigned int getSize() const{
   return _size;
  }
};

#endif