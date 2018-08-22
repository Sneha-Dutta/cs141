// First include the library
#include <iostream>
using namespace std;
//Write the main function
int main() 
{
//Write a c++ program to enter two angles of a triangle and find the tird angle
//Declare two variables for entering two angles
int angle1, angle2;
cout << "Enter two angles of a triangle" << endl;
cin >> angle1;
cin >> angle2;
//Declare a variable to find third angle of the triangle
int angle3;
angle3= 180-(angle1+ angle2);
cout << "Third angle of the triangle is=" << angle3 << endl;
return 0;
}
