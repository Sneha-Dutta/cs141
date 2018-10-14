//Write a program tp merge 2 arrays, find maximum element of two arrays, and minimum element of two arrays
//First include library
#include<iostream>
using namespace std;
int mergeArray(int ar[], int arr[],int n1, int n2) {
  int merge[n1+n2];
  for(int i=0; i<n1; i++) {
   merge[i]=ar[i];
  }
  for(int i=0; i<n2; i++) {
   merge[i+n1]=arr[i];
  }
  cout << "Merged array= ";
  for(int i=0; i<(n1+n2); i++) {
   cout << merge[i] << ", " ;
  }
  return 0;
}
int maximum(int ar[], int arr[], int n1, int n2) {
  int max=ar[0];
  for(int i=0; i<n1; i++) {
   if(ar[i]> max)
   max= ar[i];
  }
  for(int i=0; i<n2; i++) {
   if (arr[i]>max)
   max=arr[i];
  }
  return max;
}
int minimum(int ar[], int arr[], int n1, int n2) {
  int min= ar[0];
  for(int i=0; i<n1; i++) {
   if(ar[i]< min)
   min= ar[i];
  }
  for(int i=0; i<n2; i++) {
   if (arr[i]< min)
   min=arr[i];
  }
  return min;
}
//driver function
int main() {
  int no1, no2;
  cout << "The number of elements in 1st array?" << endl;
  cin >> no1;
  // declare an array to store n elements
  int ary[no1], arry[no2];
  // ask to input all elements from user
  for (int i=0; i<no1; i++) {
    int k;
    cout << "Enter " << i+1 << "th element" << endl;
    cin >> k;
    //assign the values as elements in array
    ary[i]= k;
  }
  cout << "The number of elements in 2nd array?" << endl;
  cin >> no2;
  // ask to input all elements from user
  for (int i=0; i<no2; i++) {
    int k;
    cout << "Enter " << i+1 << "th element" << endl;
    cin >> k;
    //assign the values as elements in array
    arry[i]= k;
   }
  mergeArray(ary, arry, no1, no2);
  cout << "Maximum element of two arrays=" << maximum(ary, arry, no1, no2)<< endl;;
  cout << "Minimum element of two arrays=" << minimum(ary, arry, no1, no2)<< endl;
  return 0;
}
