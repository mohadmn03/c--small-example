#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

int main() {
    const double PI = 3.14159;
    double radius;
    double diameter;
    double circumference;
    double area;
    // 
    cout << "Enter the value for radius: ";
    cin >> radius;
    diameter = 2 * radius;
    cout << "The circle diameter is: " << diameter << endl;
    circumference = 2 * radius * PI;
    cout << "The circle circumference is: " << circumference << endl;
    area = radius * radius * PI;
    cout << "The circle area is: " << area << endl;
    // 
    return 0;
    //non-aggregate type 'vector<int>' cannot be initialized with an initializer listgcc
}