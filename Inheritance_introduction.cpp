#include <iostream>
using namespace std;

class Triangle {
public:
    void triangle() {
        cout << "I am a triangle" << endl;
    }
};

class Isosceles : public Triangle {
public:
    void isosceles() {
        cout << "I am an isosceles triangle" << endl;
    }

    void description() {
        cout << "In an isosceles triangle two sides are equal" << endl;
    }
};

int main() {
    Isosceles isc;
    isc.isosceles();
    isc.description(); // Call the new function
    isc.triangle();
    return 0;
}
