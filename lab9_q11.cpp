//Write a program to declare variables of all predefined sizes and declare corresponding pointers. Print out the sizes of each of variables and pointer variables
//First include library
#include<iostream>
using namespace std;
//Write the main function
int main() {
  //declaring variables
  int a;
  float f;
  char c;
  bool b;
  double d;
  string s;
  //declaring corresponding pointers 
  int *ptra= &a;
  float *ptrf= &f;
  char *ptrc= &c;
  bool *ptrb= &b;
  double *ptrd= &d;
  string *ptrs= &s;
  //printing size of the variables
  cout << "Size of a = " << sizeof(a) << endl;
  cout << "Size of f = " << sizeof(f) << endl;
  cout << "Size of c = " << sizeof(c) << endl;
  cout << "Size of b = " << sizeof(b) << endl;
  cout << "Size of d = " << sizeof(d) << endl;
  cout << "Size of s = " << sizeof(s) << endl;
  cout << "Size of ptra = " << sizeof(ptra) << endl;
  cout << "Size of  ptrf= " << sizeof(ptrf) << endl;
  cout << "Size of ptrc = " << sizeof( ptrc) << endl;
  cout << "Size of ptrb = " << sizeof(ptrb) << endl;
  cout << "Size of ptrd = " << sizeof(ptrd) << endl;
  cout << "Size of ptrs = " << sizeof(ptrs) << endl;
  return 0;
}
  
