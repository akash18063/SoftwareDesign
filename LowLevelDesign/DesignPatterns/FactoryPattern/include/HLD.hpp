#ifndef HLD_HPP
#define HLD_HPP
#include "Course.hpp"

class HLD : public Course{
  public:
    HLD() { createCourse(); }
    void createCourse();
};
#endif