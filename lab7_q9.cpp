//Write a c++ program to check a number is palindrome or not
#include<iostream>
using namespace std;
int palindrome(int n, int rn) {
 if (n==0) {
  return rn;
 }
 else {
  rn=(rn*10)+(n%10);
  return palindrome(n/10, rn);
 }
}
int main() {
 int no;
 cout << "Enter a number" << endl;
 cin >> no;
 int rev= palindrome(no, 0);
 if(rev==no) {
  cout << "Yes, palindrome" << endl;
 }
 else {
  cout << "Not palindrome" << endl;
 }
 return 0;
}
