//First include the library
#include<iostream>
using namespace std;
//Write the main function
int main() {
//Write a c++ program to enter temperature in celsius and convert it into fahrenheit
//Declare a variable c and assign temperature
float c;
cout << "Enter temperature in celsius" << endl;
cin >> c;
//Declare avariable f and convert celsius to fahrenheit
float f;
f=(1.8*c)+32;
//Print in fahrenheit
cout << "Temperature in fahrenheit=" << f << endl;
return 0;
}

