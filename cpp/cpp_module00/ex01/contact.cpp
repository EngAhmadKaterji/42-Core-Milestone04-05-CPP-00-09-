#include "Contact.hpp"

void Contact::setFirstName(const std::string &firstName)
{
 this->firstName = firstName;
}
void Contact::setLastName(const std::string &lastName)
{
 this->lastName = lastName;
}
void Contact::setNickName(const std::string &nickName)
{
 this->nickName = nickName;
}
void Contact::setPhoneNumber(const std::string &phoneNumber)
{
 this->phoneNumber = phoneNumber;
}
std::string Contact::getFirstName() const
{
 return firstName;
}
std::string Contact::getLastName() const
{
 return lastName;
}
std::string Contact::getNickName() const
{
 return nickName;
}
std::string Contact::getPhoneNumber() const
{
 return phoneNumber;
}
