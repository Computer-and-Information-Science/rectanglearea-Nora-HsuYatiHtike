#include <iostream>
using namespace std;

int main() {
  const double length = 7.2;
  const double width = 1.3;

// calculate area and perimeter
double area = length * width;
double perimeter = 2 * (length + width);

// output exactly as expected
cout << "Length = " << length << endl;
cout << "Width = " << width << endl;
cout << "Area = " << area << endl;
cout << "Perimeter = " << perimeter << endl;

return 0;
}