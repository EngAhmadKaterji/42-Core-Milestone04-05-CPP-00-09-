#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : currentContactIndex(0), totalContacts(0) {}

void PhoneBook::addContact()
{
 std::string input;
 Contact newContact;

 std::cout << "Enter First Name: ";
 std::getline(std::cin, input);
 newContact.setFirstName(input);
 std::cout << "Enter Last Name: ";
 std::getline(std::cin, input);
 newContact.setLastName(input);
 std::cout << "Enter Nickname: ";
 std::getline(std::cin, input);
 newContact.setNickName(input);
 std::cout << "Enter Phone Number: ";
 std::getline(std::cin, input);
 newContact.setPhoneNumber(input);
 contacts[currentContactIndex] = newContact;
 currentContactIndex = (currentContactIndex + 1) % 8;
 if (totalContacts < 8)
  totalContacts++;
}
void PhoneBook::searchContacts() const
{
 int i;
 int index;

 i = -1;
 if (totalContacts == 0)
 {
   std::cout << "PhoneBook is empty!" << std::endl;
   return ;
 }
 std::cout << std::setw(10) << "Index" << "|" << std::setw(10)
  << "First Name" << "|" << std::setw(10) << "Last Name" <<
   "|" << std::setw(10) << "Nickname" << std::endl;
 while (++i < totalContacts)
 {
 std::cout << std::setw(10) << i + 1 << "|"
            << std::setw(10) << contacts[i].getFirstName().substr(0, 9) + "."
            << "|" << std::setw(10) << contacts[i].getLastName().substr(0, 9) + "."
            << "|" << std::setw(10) << contacts[i].getNickName().substr(0, 9) + "."
            << std::endl;
 }
 std::cout << "Enter index to view details: ";
 std::cin >> index;
 if (index < 1 || index > totalContacts)
  std::cout << "Invalide index!" << std::endl;
 else
  displayContact(index -1);
}
void PhoneBook::displayContact(int index) const
{
 std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
 std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
 std::cout << "Nickname: " << contacts[index].getNickName() << std::endl;
 std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
}
