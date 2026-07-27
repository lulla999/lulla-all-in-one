#include <iostream>
using namespace std;

class Point
{
private:
    float a, b;

public:
    // Default Constructor
    Point()
    {
        a = 0;
        b = 0;
        cout << "The value after default constructor: ";
        cout << "(" << a << ", " << b << ")" << endl;
    }

    // Parameterized Constructor
    Point(int x, int y)
    {
        a = x;
        b = y;
        cout << "The value after parameterized constructor: ";
        cout << "(" << a << ", " << b << ")" << endl;
    }

    // Overloaded Constructor (float)
    Point(float x, float y)
    {
        a = x;
        b = y;
        cout << "The value after overloading with float constructor: ";
        cout << "(" << a << ", " << b << ")" << endl;
    }

    // Setter
    void setPoint(float x, float y)
    {
        a = x;
        b = y;
    }

    // Getter
    void getPoint()
    {
        cout << "Point = (" << a << ", " << b << ")" << endl;
    }

    // Destructor
    ~Point()
    {
        cout << "Destructor called." << endl;
    }
};

int main()
{
    float a, b;

    cout << "Enter a and b coordinates: ";
    cin >> a >> b;

    Point p1;
    p1.setPoint(a, b);

    cout << "Value entered are: ";
    p1.getPoint();

    Point p2(3, 5);

    Point p3(3.2f, 5.2f);

    return 0;
}
