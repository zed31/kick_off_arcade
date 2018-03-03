#include <iostream>
#include "triangle.hpp"

int main () {
    std::cout << "Drawing 2 triangles..." << std::endl;
    Shape::Triangle t1;
    Shape::Triangle t2;

    t1.draw();
    t2.draw();
    return 0;
}
