//Create an array of size 10. Use a loop to print array using the normal index method as well as the pointer method
//First include library
#include<iostream>
using namespace std;
//Write the main function
int main() {
  //Creating an array of size 10
  int arr[10];
  //inputting elements of an array
  cout << "Enter 10 elements?" << endl;
  for(int i=0; i<10; i++) {
    cin >> arr[i];
  }
  // printing array using normal index method
  cout << "By normal index method= ";
  for(int i=0; i<10; i++) {
    cout << arr[i] << ", ";
  }
  cout << endl;
  //printing array using pointer method
  cout << "By pointer method= ";
  for(int i=0; i<10; i++) {
    cout << *(arr+i) << ", ";// prints the (i+1)th element of array
  }
  cout << endl;
  return 0;
}
