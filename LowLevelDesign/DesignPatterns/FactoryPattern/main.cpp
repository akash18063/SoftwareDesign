#include "include/Course.hpp"
#include "include/CourseFactory.hpp"

int main(){
  CourseFactory* courseFactory = new CourseFactory(0);
  Course* course = courseFactory->getCourse();
  course->displayModules();
}