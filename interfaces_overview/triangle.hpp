#ifndef TRIANGLE_HPP__
# define TRIANGLE_HPP__

#include <iostream>
#include "shape.hpp"

namespace Shape {

class Triangle : public Shape {
public:
    void intersec() override { std::cout << "I draw a triangle" << std::endl; };
};

} // namespace

#endif