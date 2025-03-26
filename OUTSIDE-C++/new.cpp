#include <iostream>
using namespace std;

// Class declaration
class Rectangle {
// private:
    int length;
    int breadth;

public:
    // Member functions declared
    // void setDimensions(int l, int b);  // Function declaration
    int calculateArea(int l ,int b);               // Function declaration
};

// Member function definitions outside the class
// void Rectangle::setDimensions(int l, int b) {
//     length = l;
//     breadth = b;
// }

int Rectangle::calculateArea(int l ,int b) {
    length=l;
    breadth=b;
    return length * breadth;
}

int main() {
    Rectangle rect; // Object creation
    // rect.setDimensions(5, 10); // Set dimensions
    cout << "Area of Rectangle: " << rect.calculateArea(5,6) << endl; // Print area

    return 0;
}
