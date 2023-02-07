#ifndef NEW_STUDENT
#define NEW_STUDENT
#include "Student.hpp"
#include <string>
class NewStudent : public Student{
  private:
    std::string firstName;
    std::string lastName;
    std::string email;
  public:
    NewStudent(string firstName, string lastName, string email) { 
        this->firstName = firstName;
        this->lastName = lastName;
        this->email = email;
      }
    virtual string getName() { return firstName; }
    virtual string getLastName() { return lastName; }
    virtual string getEmail() { return email; }
};
#endif