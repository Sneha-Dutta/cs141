//First include library
#include<iostream>
using namespace std;
//function for adding two numbers
int sumNum( int a, int b) {
  //returns the sum
  return a+b;
  }
//function for maximum
int maxNum( int a, int b) {
  //check which is maximum
  if (a>b) {
    return a;
  }
  else {
    return b;
  }
}
//function for minimum
int minNum( int a, int b) {
  if (a<b) {
    return a;
  }
  else {
    return b;
  }
}
//Write the main function
int main() {
  //declare the variables
  int n1, n2, result, ch;
  //ask for two numbers
  cout << "Enter two numbers" << endl;
  cin >> n1 >> n2;
  cout << "Choose: 1 for sum" << endl;
  cout << "2 for maximum" << endl;
  cout << "3 for minimum" << endl;
  cin >> ch;
  //check and do according to choice
  if (ch==1) {
   result= sumNum(n1, n2) ;
  }
  else if (ch==2) {
   result= maxNum(n1, n2) ;
  }
  else if (ch==3) {
   result= minNum(n1, n2) ;
  }
  else {
  cout << "Wrong Choice" << endl;
  }
  //Print the result 
  cout << "The result is=" << result << endl;
  return 0;
}
