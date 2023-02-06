#include "include/CourseFactory.hpp"
#include "include/LLD.hpp"
#include "include/HLD.hpp"

Course* CourseFactory::getCourse(){
  switch(this->courseType){
    case 0:
      return new LLD();
    case 1:
      return new HLD();
    default:
      return nullptr;
  }
}