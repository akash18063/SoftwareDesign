#ifndef NEW_STUDENT_ADAPTER
#define NEW_STUDENT_ADAPTER
#include "Student.hpp"
class NewStudentAdapter : public Student{
  private:
    OldStudent* oldStudent;
  public:
    NewStudentAdapter(OldStudent* oldStudent) { this->oldStudent = oldStudent; }
    virtual string getName() { return oldStudent->getFirstName(); }
    virtual string getLastName() { return oldStudent->getSurName(); }
    virtual string getEmail() { return oldStudent->getEmailAddress(); }
};
#endif