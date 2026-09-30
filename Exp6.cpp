#include <iostream>
using namespace std;

// Function declarations (prototypes)[span_4](start_span)[span_4](end_span)
int area(int);
int area(int, int);
float area(float);
float area(float, float);

int main() {
    int s, l, b;
    float r, bs, ht;

    cout << "Enter side of a square: ";
    cin >> s;

    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;

    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "Enter base and height of triangle: ";
    cin >> bs >> ht;

    // Displaying calculated areas[span_5](start_span)[span_5](end_span)
    cout << "\nArea of square is " << area(s);
    cout << "\nArea of rectangle is " << area(l, b);
    cout << "\nArea of circle is " << area(r);
    cout << "\nArea of triangle is " << area(bs, ht) << endl;

    return 0;
}

// Overloaded Function Definitions[span_6](start_span)[span_6](end_span)[span_7](start_span)[span_7](end_span)

// Area of Square[span_8](start_span)[span_8](end_span)
int area(int s) {
    return (s * s);
}

// Area of Rectangle[span_9](start_span)[span_9](end_span)
int area(int l, int b) {
    return (l * b);
}

// Area of Circle[span_10](start_span)[span_10](end_span)
float area(float r) {
    return (3.14 * r * r);
}

// Area of Triangle[span_11](start_span)[span_11](end_span)
float area(float bs, float ht) {
    return ((bs * ht) / 2);
}
