//include library
#include<iostream>
using namespace std;
//call by reference
void sumNumbers( int& a, int& b, int& total) {
total=a+b;
}
//Driver function
int main() {
int n1,n2, sum;
//ask user for numbers
cout << "Enter two numbers";
cin >> n1 >> n2;
sumNumbers(n1, n2, sum);
cout << "Sum=" << sum << endl;
return 0;
}
