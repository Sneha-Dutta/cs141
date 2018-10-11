//Write a program to find sum of all elements of an array using functions
//First include library
#include<iostream>
using namespace std;
//function for adding elements of an array
int sumElements( int arr[], int n) {
  //declare a variable to store the sum
  int sum=0;
  //add each element of array using loop
  for (int i=0;i<n; i++) {
    sum=sum+ arr[i];
  }
  //return the result
  return sum;
}
//driver function
int main() {
  int n;
  cout << "The number of elements in the array?" << endl;
  cin >> n;
  // declare an array to store n elements
  int arr[n];
  // ask to input all elements from user
  for (int i=0; i<n; i++) {
    int k;
    cout << "Enter " << i+1 << "th element" << endl;
    cin >> k;
    //assign the values as elements in array
    arr[i]= k;
  }
  //call the function
  cout << "Sum of all element of array= " << sumElements(arr ,n) << endl;
  return 0;
}
