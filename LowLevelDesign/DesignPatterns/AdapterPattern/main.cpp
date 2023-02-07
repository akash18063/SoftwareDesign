#include "include/School.hpp"

int main(){
  School* school = new School();
  vector<Student*> students = school->getStudents();
  for(auto student : students){
    student->display();
  }
}