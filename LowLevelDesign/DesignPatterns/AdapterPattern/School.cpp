#include "include/School.hpp"
#include "include/OldStudent.hpp"
#include "include/NewStudent.hpp"
#include "include/NewStudentAdapter.hpp"

vector<Student*> School::getStudents(){
  Student* newStudent = new NewStudent("Akash", "Gosain", "xyz@gmail.com");
  OldStudent* oldStudent = new OldStudent("Ashish", "Singh", "xzy@gmail.com");
  Student* oldStudentAdapted = new NewStudentAdapter(oldStudent);
  students.push_back(newStudent);
  students.push_back(oldStudentAdapted);
  return students;
}