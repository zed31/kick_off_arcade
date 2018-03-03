#ifndef SHAPE_HPP__
# define SHAPE_HPP__

namespace Shape {

/*
 * Nothing concrete here, a shape is too general
*/
class Shape {
public:
    virtual ~Shape() = default;

    //Function common to every derived classes
    //Putting const here adds compile-time contract hard to maintain
    virtual void draw() = 0;
};

} // namespace

#endif //SHAPE_HPP__
