//Create a string and store your name in it. Use a loop to print string character by character using the normal index method as well as the pointer method
//First include library
#include<iostream>
#include<cstring>
using namespace std;
//Write the main function
int main() {
  //Storing the string as a character array
  char arr[12]= "Sneha Dutta";
  //Printing name character by character
  //Normal index method
  cout << "Normal Index Method=" << endl;
  //loop to access elements of array and print it
  for (int i=0; arr[i]!= '\0'; i++ ) {
    cout << arr[i] << endl;
  }
  //Pointer method
  cout << "Pointer method=" << endl;
  char *chrptr=arr;
  while (*chrptr != '\0') {
    cout << *chrptr << endl;
    chrptr++;
  }
  return 0;
}
