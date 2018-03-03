#ifndef TRIANGLE_HPP__
# define TRIANGLE_HPP__

#include <iostream>
#include "shape.hpp"

namespace Shape {

//Concrete class Triangle
class Triangle : public Shape {
public:
    void draw() override { std::cout << "I draw a triangle" << std::endl; };
};

} // namespace

#endif
