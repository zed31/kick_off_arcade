#ifndef CIRCLE_HPP__
# define CIRCLE_HPP__

#include <iostream>
#include "shape.hpp"

namespace Shape {

//Concrete class Circle
class Circle : public Shape {
public:
    void draw() override { std::cout << "I draw a circle" << std::endl; };
};

} // namespace

#endif
