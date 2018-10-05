//First include library
#include<iostream>
using namespace std;
//Function for adding natural numbers till n
int sumNaturalNo(int n) {
  if(n!=0) {
    return n+sumNaturalNo(n-1);
  }
}
//Write the main function
int main() {
  int no;
  cout << "Enter a number"<< endl;
  cin >> no;
  //Print sum by calling the function
  cout << "Sum of numbers=" << sumNaturalNo(no);
  return 0;
}
