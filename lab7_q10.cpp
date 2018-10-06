//Write a c++ program to print all natural numbers between 1 to n using recursion
//First include library
#include<iostream>
using namespace std;
int printNaturalNum(int i, int n) {
  if(i<=n) {
   cout << i << endl;
   return printNaturalNum(i+1, n);
  }
  else 
  return 0;
}
int main() {
  int num;
  cout << "Enter number till which natural numbers to be printed" << endl;
  cin >> num;
  printNaturalNum(1, num);
  return 0;
} 
