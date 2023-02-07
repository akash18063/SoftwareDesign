#ifndef SCHOOL
#define SCHOOL
#include "Student.hpp"
#include <vector>

using namespace std;

class School{
  private:
    vector<Student*> students;
  public:
    vector<Student*> getStudents();
};
#endif