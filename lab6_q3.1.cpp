//include library
#include<iostream>
using namespace std;
//function for maximum of two numbers
int maxNum( int a, int b) {
if (a>b) {
return a;}
else {
return b; }
}
//write the main function
int main() {
//declare three variables
int n1, n2, n;
cout << "Enter two numbers";
cin >> n1 >> n2;
//call the function to sum the numbers
n= maxNum(n1, n2);
cout << "Maximum=" << n << endl;
}
