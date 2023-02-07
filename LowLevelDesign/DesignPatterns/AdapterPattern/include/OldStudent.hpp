#ifndef OLD_STUDENT
#define OLD_STUDENT
#include <string>
class OldStudent{
  private:
    std::string name;
    std::string surName;
    std::string emailAddress;
  public:
    OldStudent(string name, string surName, string emailAddress){
      this->name = name;
      this->surName = surName;
      this->emailAddress = emailAddress;
    }
    string getFirstName() { return name; }
    string getSurName() { return surName; }
    string getEmailAddress() { return emailAddress; }
};
#endif