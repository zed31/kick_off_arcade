#ifndef SHAPE_HPP__
# define SHAPE_HPP__

namespace Shape {

//General behavior of the shape
class Drawable {
public:
    virtual ~Drawable() = default;

    //Function common to every derived classes
    //Putting const here adds compile-time contract hard to maintain
    virtual void draw() = 0;
};

} // namespace

#endif //SHAPE_HPP__
