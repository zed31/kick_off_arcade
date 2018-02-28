#ifndef CYLINDER_HPP__
# define CYLINDER_HPP__

#include <iostream>
#include "shape.hpp"

namespace Shape {

class Cylinder : public Shape {
public:
    void intersec() override { std::cout << "I draw a cylinder" << std::endl; };
};

} // namespace

#endif