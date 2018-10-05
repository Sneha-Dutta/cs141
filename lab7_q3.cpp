//Write a c++ program to find reverse of any number using recursion
//First include library
#include<iostream>
using namespace std;
//function for reversing a number
int reverse(int n) {
  if(n==0) {
   return 1;
  }
  else {
   cout << n%10 ;
   n=n/10;
   reverse(n) ;
  }
}
//Write the main function
int main() {
  int a;
  cout << "Enter a number" << endl;
  cin >> a;
  //call the function
  reverse(a) ;
  return 0;
}
