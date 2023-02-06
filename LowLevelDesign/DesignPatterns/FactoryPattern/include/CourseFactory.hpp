#ifndef COURSE_FACTORY_HPP
#define COURSE_FACTORY_HPP
#include "Course.hpp"
class CourseFactory{
  private:
    int courseType;
  public:
    CourseFactory(){};
    CourseFactory(int courseType) { this->courseType = courseType; };
    Course* getCourse();
};
#endif