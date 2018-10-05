//Write a c++ program to find power of any number using recursion
//(a^b)=a* a^(b-1)
//First include library
#include<iostream>
using namespace std;
//function for calculating power
long powerOfNo(int a, int b) {
  if(b==0) {
    return 1;
  }
  else {
    return a*powerOfNo(a,b-1) ;
  }
}
//Write the main function
int main() {
  int x,y;
  cout << "Enter a number" << endl;
  cin >> x;
  cout << "Enter the power to be raised upon" << endl;
  cin >> y;
  cout << "The result is " << powerOfNo(x,y);
  return 0;
}
