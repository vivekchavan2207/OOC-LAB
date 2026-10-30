#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

class Shape
{
public:

    virtual double calculateArea() const = 0;

    virtual double calculatePerimeter() const = 0;
};

class Circle : public Shape
{
private:
    double radius;

public:

    Circle(double r)
    {
        radius = r;
    }

    double calculateArea() const override
    {
        return PI * radius * radius;
    }

    double calculatePerimeter() const override
    {
        return 2 * PI * radius;
    }
};

class Rectangle : public Shape
{
private:
    double length;
    double width;

public:

    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    double calculateArea() const override
    {
        return length * width;
    }

    double calculatePerimeter() const override
    {
        return 2 * (length + width);
    }
};

int main()
{
    Circle circle(7);

    Rectangle rectangle(4, 8);

    cout << "Circle" << endl;
    cout << "Area: "
         << circle.calculateArea() << endl;

    cout << "Perimeter: "
         << circle.calculatePerimeter() << endl;

    cout << "\nRectangle" << endl;
    cout << "Area: "
         << rectangle.calculateArea() << endl;

    cout << "Perimeter: "
         << rectangle.calculatePerimeter() << endl;

    return 0;
}
