#ifndef CIRCLE_HPP__
# define CIRCLE_HPP__

#include <iostream>
#include "shape.hpp"

namespace Shape {

class Circle : public Shape {
public:
    void intersec() override { std::cout << "I draw a circle" << std::endl; };
};

} // namespace

#endif