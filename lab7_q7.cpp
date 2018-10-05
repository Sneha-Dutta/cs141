//Write a c++ program to find factorial of any number using recursion
//First include library
#include<iostream>
using namespace std;
//function for finding factorial
int factorial(int n) {
  if(n==0) {
    //stop the recursion
    return 1;
  }
  else {
    //call the function to multiply the number with the previous number
    return n*factorial(n-1);
  }
}
//driver function
int main() {
  int no;
  cout << "Enter a number to find factorial" << endl;
  cin >> no;
  //call the recursive function and print the result 
  cout << "The factorial of given number is=" << factorial(no) << endl;
  return 0;
}
