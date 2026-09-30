#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor with default values (1 for both length and width)
    Rectangle() : length(1.0), width(1.0) {}

    // Constructor with custom values
    Rectangle(double len, double wid) : length(len), width(wid) {}

    // Destructor (optional, but good practice)
    ~Rectangle() {
        std::cout << "Rectangle object destroyed." << std::endl;
    }

    // Getter methods for length and width
    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    // Setter methods for length and width
    void setLength(double len) {
        length = len;
    }

    void setWidth(double wid) {
        width = wid;
    }
};

int main() {
    // Constructor Overloading: creating objects with different constructors
    Rectangle o;           // Default constructor
    Rectangle o2(10, 20);  // Parameterized constructor

    // Displaying dimensions/area using getters or calculations
    std::cout << "Length 1: " << o.getLength() << ", Width 1: " << o.getWidth() << std::endl;
    std::cout << "Length 2: " << o2.getLength() << ", Width 2: " << o2.getWidth() << std::endl;

    return 0;
}
