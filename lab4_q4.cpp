//First include the library
#include<iostream>
using namespace std;
//Write the main function
int main() {
//Write a c++ program to enter P, T, R and calculate simple interest
// Declare three variables p, t, r for princlpal, time and rate and enter their values
double p;
float r, t;
cout << "Enter principal" << endl;
cin >> p;
cout << "Enter rate per annum" << endl;
cin >> r;
cout << "Enter time in years" << endl;
cin >> t;
//Declare a variable for SI and calculate and print SI
double si;
si= (p*r*t)/100;
cout << "Simple Interest=" << si << endl;
return 0;
}
