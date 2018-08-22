//First include the library
#include <iostream>
#include <cmath>
using namespace std;
//Write the main function
int main()
{
// Write a c++ program to calculate area of an equilateral triangle
//Declare a variable and input side 
float s;
cout << "Enter side of an equilateral triangle" << endl;
cin >> s;
//Declare variable for area and calculate the area
double area;
area= sqrt(3)/4*(s*s);
// Print area
cout << "Area of equilateral triangle=" << area << endl;
return 0;
}
