#ifndef CYLINDER_HPP__
# define CYLINDER_HPP__

#include <iostream>
#include "shape.hpp"

namespace Shape {

//Concrete class Cylinder
class Cylinder : public Shape {
public:
    void draw() override { std::cout << "I draw a cylinder" << std::endl; };
};

} // namespace

#endif
