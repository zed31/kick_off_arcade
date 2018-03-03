#include <iostream>
#include <memory>
#include <array>
#include <algorithm>
#include <fstream>
#include <string>
#include "circle.hpp"
#include "shape.hpp"
#include "triangle.hpp"
#include "cylinder.hpp"

constexpr std::size_t nbr_of_shape = 2;

//Type aliases
using shape_ptr = std::unique_ptr<Shape::Drawable>;
using shape_array = std::array<shape_ptr, nbr_of_shape>;

static void load_engine() {
    while (1) {
        shape_array arr; 
        std::cout << "Initializing one circle and one triangle shape" << std::endl;
        
        //Initializing one circle and one triangle in the same container
        arr[0] = std::make_unique<Shape::Circle>();
        arr[1] = std::make_unique<Shape::Triangle>();
        
        std::cout << "Drawing some shape now...." << std::endl;

        //Loops over the array and calls the third parameter which is a function
        //which calls the draw from the data 
        std::for_each(arr.begin(), arr.end(), [](auto&& data) { data->draw(); });
    }
}

int main () {
    load_engine();
}
