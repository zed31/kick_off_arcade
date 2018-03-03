#include <iostream>
#include <array>
#include <algorithm>
#include "circle.hpp"
#include "triangle.hpp"

//Type aliases
using circle_array = std::array<Shape::Circle, 2>;
using triangle_array = std::array<Shape::Triangle, 2>;

int main() {
    std::cout << "Mix circles and triangles drawing..." << std::endl;
    
    //Array of circles definition
    circle_array circles{ Shape::Circle{}, Shape::Circle{} };

    //Array of triangles definition
    triangle_array triangles{ Shape::Triangle{}, Shape::Triangle{} };
    
    //If there is another type of shape: we must define a container for it
    //it generate hard code to maintain

    //We iterate through the array of circles
    std::for_each(circles.begin(), circles.end(), [] (auto&& item) { item.draw(); } );

    //We iterate through the array of triangles
    std::for_each(triangles.begin(), triangles.end(), [] (auto&& item) { item.draw(); } );

    //If there is more shape: we need to iterate through those as well
    //So create even more loops, repeat more code, ...
}
