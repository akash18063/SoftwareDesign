#ifndef LLD_HPP
#define LLD_HPP
#include "Course.hpp"

class LLD : public Course{
  public:
    LLD() { createCourse(); }
    void createCourse();
};
#endif