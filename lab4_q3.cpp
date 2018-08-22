//First include the library
#include<iostream>
using namespace std;
//Write the main function
int main() {
//Write a c++ program to enter base and height of a triangle and calculate its area
//Declare two variables b and h and enter base and height 
float b, h;
cout << "Enter base of triangle" << endl;
cin >> b;
cout << "Enter height of triangle" << endl;
cin >> h;
//Declare a variable area and calculate area
double area;
area= 0.5*b*h;
//Print area
cout << "Area of triangle=" << area << endl;
return 0;
}

