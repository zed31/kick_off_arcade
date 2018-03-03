#ifndef SHAPE_HPP__
# define SHAPE_HPP__

namespace Shape {

/*
 * Nothing concrete here, a shape is too general
*/
class Shape {
public:
    virtual ~Shape() = default;

    //Common function to all derived class
    //Put const here add compile-time contract 
    //which could be hard to maintain
    virtual void intersec() = 0;
};

} // namespace

#endif //SHAPE_HPP__
