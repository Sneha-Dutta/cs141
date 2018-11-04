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
  cout << "Shifting top character of string to right" << endl;
  //pointer variable refers to address of string
  char *p = str;
  //Showing string by shifting top character of string to right with the help of loop
  while (*p != '\0') {
    cout << p++ << endl;
  }
  return 0;
}
