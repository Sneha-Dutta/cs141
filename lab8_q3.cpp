//to find kth largest and smallest number in an array
//first include library
#include<iostream>
using namespace std;
//function to sort the array in ascending order
int sortArray(int ar[], int n) {
  int i, j, a;
  //make a nested loop
  for(i=0; i<n; ++i) {
   for(j=i+1; j<n; ++j) {
    //compare the element with all the elements below it
    if(ar[i]>ar[j]) {
     //if bigger, interchange the elements
     a=ar[i];
     ar[i]=ar[j];
     ar[j]=a;
    }
   }
  }
}
//find kth largest
int klarge(int ary[], int n, int k) {
  //calling the function to sort array
  sortArray(ary, n) ;
  int k_max=ary[n-k];
  return k_max;
}
//find kth smallest value
int ksmall(int ary[], int n, int k) {
  //calling the function to sort
  sortArray(ary, n) ;
  int k_min=ary[k-1];
  return k_min;
}
//driver function
int main() {
  int n, kl, ks;
  cout << "The number of elements in the array?" << endl;
  cin >> n;
  // declare an array to store n elements
  int arr[n];
  // ask to input all elements from user
  for (int i=0; i<n; i++) {
    int p;
    cout << "Enter " << i+1 << "th element" << endl;
    cin >> p;
    //assign the values as elements in array
    arr[i]= p;
  }
  //print the result
  cout << "Enter k value for kth largest?" << endl;
  cin >> kl;
  cout << kl << "th largest value=" << klarge(arr, n, kl) << endl;
  cout << "Enter k value for kth smallest?" << endl;
  cin >> ks;
  cout << ks << "th smallest value= " << ksmall(arr, n, ks) << endl;
  return 0;
}
  
