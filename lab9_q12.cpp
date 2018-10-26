//First include library
#include<iostream>
using namespace std;
//Write main function
int main() {
  //declare two variables a, b and a pointer variable p of int tyoe
  int a, b;
  int *p;
  //point p to a
  *p= &a;
  //Store the value pointed by p in b
  b= *p;
  //Print values of a, b and *p
  cout << a << endl;
  cout << b << endl;
  cout << *p << endl;
  //Assign a=2, b=3
  a=2;
  b=3;
  //print values of a, b and *p
  cout << a << endl;
  cout << b << endl;
  cout << *p << endl;
  //point p to b
  *p= &b;
  //Print values of a, b and *p
  cout << a << endl;
  cout << b << endl;
  cout << *p << endl;
  return 0;
}
