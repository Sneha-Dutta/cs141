//First include library
#include<iostream>
using namespace std;
//function for printing even numbers in given range
int evenNo(int n1, int n2) {
  if(n1>n2) {
    return 1;
  }
  else {
    //check whether number is even
    if(n1%2==0) {
      cout << n1 << endl ;
      //add 2 to get next even no
      n1=n1+2;
      evenNo(n1, n2);
    }
    //if not even go to next number and again call the function
    else {
      n1++;
      evenNo(n1,n2);
    }
  }
}
//function for printing odd number
int oddNo(int n1, int n2) {
  if(n1>n2) {
    return 1;
  }
  else {
    //check whether the number is odd
    if(n1%2==1) {
      cout << n1 << endl ;
      //add 2 to get next odd no
      n1=n1+2;
      oddNo(n1, n2);
    }
    ////if not odd go to next number and again call the function
    else {
      n1++;
      oddNo(n1,n2);
    }
  }
}
//Write the main function
int main() {
  int no1, no2;
  cout << "Enter two numbers for range" << endl;
  cin >> no1 >> no2;
  cout << "The even nos in given range are:" << endl;
  evenNo(no1, no2);
  cout << "The odd nos. in given range are:" << endl;
  oddNo(no1,no2);
  return 0;
}

