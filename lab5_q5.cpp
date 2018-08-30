/*Write a C++ program to check whether the triangle is equilateral, isosceles or scalene triangle*/
//Include the library
#include <iostream>
using namespace std;
//Write the main function
int main()
{
//Declare 3 variables to enter sides of a triangle
float s1, s2, s3;
cout << "Enter three sides of a triangle" << endl;
cin >> s1 >> s2 >> s3;
if ((s1==s2) && (s2==s3)) {
cout << "Triangle is equilateral" << endl;
}
else if ((s1==s2) || (s2==s3) || (s1==s3))
{
cout << "Triangle is isosceles" << endl;
}
else {
cout << "Triangle is scalene" << endl;
}
return 0;
}
