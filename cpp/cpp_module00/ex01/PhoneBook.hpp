#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

class PhoneBook
{
 private:
  Contact contacts[8];
  int currentContactIndex;
  int totalContacts;
 
 public:
  PhoneBook();
  void addContact();
  void searchContacts() const;
  void displayContact(int index) const;
};

#endif