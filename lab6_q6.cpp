//First include library
#include<cmath>
#include<iostream>
using namespace std;
//Function for sum of even numbers
int sumEvenNumbers( int firstNum, int secondNum) {
  int i=firstNum;
  int sum;
  while (i< secondNum) {
   i++;
   if (i%2==0) {
    sum+=i;
   }
  }
  return sum;
}
//function for sum of odd numbers
int sumOddNumbers( int firstNum, int secondNum) {
  int i=firstNum;
  int sumno;
  while (i< secondNum) {
   i++;
   if (!(i%2==0)) {
    sumno+=i;
   }
  }
  return sumno;
}
//function for sum of square of odd numbers
int sumSquareOddNumbers( int firstNum, int secondNum) {
  int i= firstNum;
  double sumsq, j;
  while (i< secondNum) {
   i++;
   if (!(i%2==0)) {
    j=pow(i,2);
    sumsq+=j;
   }
  }
  return sumsq;
}
//function for sum of square of even numbers
int sumSquareEvenNumbers( int firstNum, int secondNum) {
  int i=firstNum ;
  double sumsqr, j;
  while (i<secondNum) {
   i++;
   if (i%2==0) {
    j=pow(i,2) ;
    sumsqr+=j;
   }
  }
  return sumsqr;
}
//Write the main function
int main() {
  int n1,n2;
  //Ask the user for two numbers
  cout << "Enter first and second number" << endl;
  cin >> n1 >> n2;
  //call the functions
  int sumEven = sumEvenNumbers( n1, n2) ;
  int sumOdd= sumOddNumbers( n1, n2) ;
  double sumSquareEven= sumSquareEvenNumbers( n1, n2) ;
  double sumSquareOdd= sumSquareOddNumbers( n1, n2) ;
  //print the result
  cout << "Sum of even no.=" << sumEven << endl;
  cout << "Sum of odd no.=" << sumOdd << endl ;
  cout << "Sum of square of even no.=" << sumSquareEven << endl;
  cout << "Sum of square of odd no.=" << sumSquareOdd << endl;
  return 0;
}  

