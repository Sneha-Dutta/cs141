//Write a c++ program to find sum of digits of any number using recursion
//First include library
#include<iostream>
using namespace std;
//function for adding digits of a number
int sumOfDigits(int n) {
  if(n==0) {
   return 1;
  }
  else {
   sum=sum+ (n%10) ;
   n=n/10;
   sumOfDigits(n) ;
  }
}
//Write the main function
int main() {
  int a,s;
  cout << "Enter a number" << endl;
  cin >> a;
  //call the function
  cout << "Sum of digits is " << sumOfDigits(a);
  return 0;
}
