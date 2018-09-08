//include library
#include<iostream>
using namespace std;
//function for adding two numbers
int sumNum( int a, int b) {
//returns the sum
return a+b;
}
//write the main function
int main() {
//declare three variables
int n1, n2, sum;
//call the function to sum the numbers
sum= sumNum(n1, n2);
cout << "Sum=" << sum << endl;
}
