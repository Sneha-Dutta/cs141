//call by value
//minimum
//include the library
#include <iostream>
using namespace std;
//declare the function
int minimum( int a, int b) {
//check which is minimum
if (a<b) {
return a;
}
else {
return b;
}
}
//driver function
int main () {
int n1, n2;
//Ask for the two numbers
cout << " Enter two numbers "<< endl;
cin >> n1 >> n2;
//call the function
int n= minimum( n1, n2) ;
//print the minimum
cout << "Minimum of the two numbers is=" << n << endl;
return 0;
}
