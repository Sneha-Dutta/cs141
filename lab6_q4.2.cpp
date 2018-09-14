//Find the minimum
//Call by reference
//First include the library
#include<iostream>
using namespace std;
//Declare a function for finding minimum
void minNum(int& a, int& b, int& minm) {
  //find minimum
  if (a<b) {
    minm= a;
  }
  else {
    minm=b;
  }
}
//Write the Main function
int main() {
  int n1, n2, mnm;
  //Ask for two numbers
  cout << "Enter two numbers";
  cin >> n1 >> n2;
  //Use the function
  minNum(n1, n2, mnm) ;
  cout << "Minimum number is=" << mnm << endl;
  return 0;
}
