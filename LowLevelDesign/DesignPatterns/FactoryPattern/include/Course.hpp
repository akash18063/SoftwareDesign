#ifndef COURSE_HPP
#define COURSE_HPP
#include<vector>
#include<string>
#include<iostream>
class Course{
 protected:
    std::vector<std::string> modules;
 public:
  Course(){}
  virtual void createCourse() = 0;
  void displayModules() { for(auto module : this->modules) std::cout<< module <<std::endl; }
};

#endif