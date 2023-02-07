#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <iostream>
using namespace std;
class Student{
  public:
    virtual string getName() = 0;
    virtual string getLastName() = 0;
    virtual string getEmail() = 0;
    void display(){
      cout<<"first name"<< getName()<< endl;
      cout<<"last name"<< getLastName()<< endl;
      cout<<"email"<< getEmail()<< endl;
    }
};
#endif