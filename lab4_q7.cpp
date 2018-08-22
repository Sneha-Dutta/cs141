//First include the library
#include <iostream>
using namespace std;
//Write the main function
int main()
{
//Write a c++ program to convert days into years, weeks and days.
// Declare a variable to input number of days
int d;
cout << "Enter no. of days" << endl;
cin >> d;
//Declare variables to store year, weeks and days
int yr, wk, days;
yr=d/365;
//Declare variable to store no. of days left
int rd= d%365;
//claculate weeks and days
wk=rd/7;
days=rd%7;
cout << "Years=" << yr << endl;
cout << "Weeks=" << wk << endl;
cout << "Days=" << days << endl;
return 0;
}
