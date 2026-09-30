#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Function to set or input complex number
    void inputData() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    // Function to display complex number in correct format (a + bi)
    void display() const {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }

    // Member function to perform addition
    Complex add(const Complex& c) const {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Member function to perform subtraction
    Complex subtract(const Complex& c) const {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, resultAdd, resultSub;

    cout << "--- Input First Complex Number ---" << endl;
    c1.inputData();

    cout << "\n--- Input Second Complex Number ---" << endl;
    c2.inputData();

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    // Performing addition and subtraction
    resultAdd = c1.add(c2);
    resultSub = c1.subtract(c2);

    cout << "\n--- Results ---" << endl;
    cout << "Addition: ";
    resultAdd.display();

    cout << "Subtraction: ";
    resultSub.display();

    return 0;
}
