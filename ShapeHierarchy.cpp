// ShapeHierarchy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Base Shape\n";
    }
};

class Circle : public Shape {
public:
    float r;
    Circle(float radius) { r = radius; }

    void area() override {
        cout << "Circle Area: " << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape {
public:
    int l, w;
    Rectangle(int a, int b) { l = a; w = b; }

    void area() override {
        cout << "Rectangle Area: " << l * w << endl;
    }
};

int main() {
    Shape* s;
    Circle c(5);
    Rectangle r(4, 6);

    s = &c;
    s->area();

    s = &r;
    s->area();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
