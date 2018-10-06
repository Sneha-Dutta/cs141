//Write a program to generate nth Fibonacci term using recursion
//First include library
#include<iostream>
using namespace std;
int fibonacci(int n) {
  //0th term of fibonacci is 0, 1st term of fibonacci is 1
  if(n==0 || n==1) {
    return n;
  }
  else {
    //Adding the previous two terms to get the next term
    return(fibonacci(n-1)+fibonacci(n-2));
  }
}
//driver function
int main() {
  int no;
  cout << "Enter the nth number of fibonacci series" << endl;
  cin >> no;
  cout << "The nth term of fibonacci series is=" << fibonacci(no) << endl;
  return 0;
}

