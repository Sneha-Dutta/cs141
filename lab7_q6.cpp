//Write a c++ program to find gcd (hcf) of two numbers using recursion
//First include library
#include<iostream>
using namespace std;
//recursive function to return gcd
int gcd(int n1, int n2) {
  if(n2 != 0) {
    //divide n1 by n2,if remainder is not 0,set value of n2 into n1 and the remainder into n2
    return gcd(n2, n1%n2);
  }
  else {
    return n1;
  }
}
//driver program
int main() {
  int no1, no2;
  cout << "Enter two numbers to find gcd" << endl;
  cin >> no1 >> no2;
  //call the function
  cout << "The GCD is= " << gcd(no1, no2);
  return 0;
}

