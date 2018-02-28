#include <iostream>
#include "triangle.hpp"

int main () {
    std::cout << "Drawing 2 triangles..." << std::endl;
    Shape::Triangle t1;
    Shape::Triangle t2;

    t1.intersec();
    t2.intersec();
    return 0;
}