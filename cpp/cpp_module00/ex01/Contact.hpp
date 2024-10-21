#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact 
{
 private:
  std::string firstName;
  std::string lastName;
  std::string nickName;
  std::string phoneNumber;
 
 public:
 void setFirstName(const std::string &firstName);
 void setLastName(const std::string &lastName);
 void setNickName(const std::string &nickName);
 void setPhoneNumber(const std::string &phoneNumber);

 std::string getFirstName() const;
 std::string getLastName() const;
 std::string getNickName() const;
 std::string getPhoneNumber() const;
};

#endif