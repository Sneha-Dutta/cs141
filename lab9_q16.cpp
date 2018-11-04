//First include library
#include<iostream>
#include<cstring>
using namespace std;
//Write the main function
int main() {
  //create an array to store the string
  char str[20];
  //ask the user to input the string
  cout << "Input about 10 characters of string" << endl;
  cin >> str;
  //to determine number of characters in the string
  int size= strlen(str);
  cout << "Shifting top character of string from right to left" << endl;
  //pointer variable refers to address of string, points to last character of the string
  char *p = &str[size-1];
  //Showing string by shifting top character of string from right to left with the help of loop
  while (p != &str[0]) {
    cout << p-- << endl;
  }
  cout << str << endl;
  return 0;
}
