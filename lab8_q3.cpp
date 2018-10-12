//Write a program to merge two arrays, find maximum of two arrays, find minimum of 2 arrays
//Use function for each
#include<iostream>
using namespace std;
int mergeArray( int ar[],int n1, int arr[], int n2) {
 int merge[n1+n2];
 for (int i=0; i<n1; i++) {
  merge[i]= ar[i];
 }
 for(int j=0; j<n2; j++) {
  merge[j+n1-1]= arr[j];
 }
 return merge;
}
int maximum(int merge[], int n) {
 mergeArray(ar, n1, arr, n2);
 int max=merge[0];
 for (int i=0; i<n; i++) {
  if(merge[i]>max) {
   max=merge[i];
  }
 }
 return max;
}
int main() {
  int n1, n2, k;
  int ar[n1], ar[n2];
  cout << "Enter no. of elements in 1st array?" << endl;
  cin >> n1;
  cout << "Enter no. of elements in 2nd array?" << endl;
  cin >> n2;
  for(int i=0;i<n1; i++) {
   cout << "Enter "<< i+1 <<"th element of an array" << endl;
   cin >> k;
   ar[i]=k;
  }
  for(int i=0;i<n2; i++) {
   cout << "Enter "<< i+1 <<"th element of an array" << endl;
   cin >> k;
   arr[i]=k;
  }
  cout << "The merged array =" << mergeArray( ar, n1, arr , n2) << endl;
  cout << "maximum of all elements=" << maximum( merge, n1+n2) << endl;
  return 0;
}
  
