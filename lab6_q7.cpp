//Uppercase and lowercase 
//first include library
#include<iostream>
using namespace std;
//convert lower case to upper case
char toUpper( char ch) {
  char c= ch-32;
  return c;
}
//function to convert upper case to lower case
char toLower( char ch) {
  char c=ch+32;
  return c;
}
//write the main function
int main() {
  char n, result;
  //Ask to enter a character
  cout << "Enter a character" << endl;
  cin >> n;
  if (n>=97 && n<=122) {
  //character is lower case, convert to upper
  result= toUpper( n) ;
  }
  if (n>=65 && n<=92) {
   //character of upper case convert to lower
   result= toLower( n) ;
  }
  //print the converted character
  cout << "Converted character=" << result << endl;
  return 0;
}

