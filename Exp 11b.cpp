#include <iostream>
#include <exception>
using namespace std;

class InvalidAgeException : public exception
{
public:
    const char* what() const noexcept override
    {
        return "Invalid age!";
    }
};

class Person
{
public:
    void checkAge(int age)
    {
        if (age < 18)
            throw InvalidAgeException();

        cout << "Valid age";
    }
};

int main()
{
    Person p;
    int age;

    cout << "Enter age: ";
    cin >> age;

    try
    {
        p.checkAge(age);
    }
    catch (const InvalidAgeException& e)
    {
        cout << e.what();
    }

    return 0;
}
