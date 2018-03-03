#include <iostream>
#include "circle.hpp"


int main () {

    std::cout << "Drawing 2 circles..." << std::endl;
    Shape::Circle c1;
    Shape::Circle c2;

    c1.draw();
    c2.draw();
    return 0;
}
