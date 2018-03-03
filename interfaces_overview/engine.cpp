#include "circle.hpp"
#include "shape.hpp"
#include "triangle.hpp"
#include "cylinder.hpp"
#include <iostream>
#include <memory>
#include <array>
#include <algorithm>
#include <fstream>
#include <string>

constexpr std::size_t nbr_of_shape = 2;

//Type aliases
using shape_ptr = std::unique_ptr<Shape::Shape>;
using shape_array = std::array<shape_ptr, nbr_of_shape>;

static void load_engine() {
    while (1) {
        shape_array arr; 

        std::cout << "Choose what you want to draw" << std::endl;
        std::cout << "C: draw 2 cylinders shape" << std::endl;
        std::cout << "T: draw 2 triangles shape" << std::endl;

        std::cout << ">> ";

        //Retrieve the stdin from the user
        std::string line{};
        std::getline(std::cin, line);

        //Check if the input is either a cylinder or a triangle
        //Recall the load_engine otherwise
        if (line == "C") {
            std::cout << "Generating 2 cylinders..." << std::endl;
            arr[0] = std::make_unique<Shape::Cylinder>();
            arr[1] = std::make_unique<Shape::Cylinder>();
        } else if (line == "T") {
            std::cout << "Generating 2 triangles..." << std::endl;
            arr[0] = std::make_unique<Shape::Triangle>();
            arr[1] = std::make_unique<Shape::Triangle>();
        } else {
            std::cout << "Unrecognized shape..." << std::endl;
            continue;
        }

        std::cout << "Drawing some shape now...." << std::endl;

        //Loop through the array and call the third parameter which is a function
        //which call the intersec from the data 
        std::for_each(arr.begin(), arr.end(), [](auto&& data) { data->intersec(); });
    }
}

int main () {
    load_engine();
}
