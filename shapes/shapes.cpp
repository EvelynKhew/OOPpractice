/** This file contains my personal solution to "Exercise 1" from
* https://erlerobotics.gitbooks.io/erle-robotics-cpp-gitbook/content/object-oriented_programming__oop_and_inheritance/exercises_oop.html
* 
* @author Evelyn Khew
*/

#include <iostream>

class shape {
protected:
    int width;
    int height;

public:
    void shapeCon(int w, int h) {
        width = w;
        height = h;
    }
};

class Triangle : public shape {
public:
    float area() { return (width * height * 0.5); }
};

class Rectangle : public shape {
public:
    float area() { return (width * height); }
};

int main()
{
    Triangle threeSided;
    Rectangle fourSided;
    threeSided.shapeCon(2, 3);
    fourSided.shapeCon(2, 3);

    std::cout << "Triangle's area is " << threeSided.area() << " \n";
    std::cout << "Rectangle's area is " << fourSided.area() << " \n";
}
