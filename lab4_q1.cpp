//First include the library 
#include<iostream>
using namespace std;
//Write then main function
int main() {
//Write a c++ program to enter length in centimeter and convert it into meter and kilometer
//Declare a variable l and assign length 
float l;
cout << "Enter length in centimeter" << endl;
cin >> l;
//Declare two variables for storing length in meter and kilometer
double m,km;
//Convert centimeter to meter
m=l/100;
//Convert meter to kilometer
km=m/1000;
//Print length in meter and kilometer
cout << "Length in meter=" << m << endl;
cout << "Length in kilometer=" << km << endl;
return 0;
}
