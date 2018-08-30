// Write a C++ program to input angles of a triangle and check whether triangle is valid or not
//Include the library
#include <iostream>
using namespace std;
//Write the main function
int main()
{
//Declare 3 variables to input 3 angles of triangle
int a1, a2, a3;
cout << "Enter 3 angles of a triangle" << endl;
cin >> a1 >> a2 >> a3;

//Check whether triangle is valid or not
if ((a1+a2+a3)==180) {
cout << "Triangle is valid" << endl;
}
else {
cout << "Triangle is not valid" << endl;
}
return 0;
}

