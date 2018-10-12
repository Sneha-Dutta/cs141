//Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array
//use function for each of the task
//first include library
#include<iostream>
#include<algorithm>
using namespace std;
//func to find largest
int largest(int arr[], int n) {
  int max=arr[0];
  for(int i=0; i<n; i++) {
    if(arr[i]>max) {
     max=arr[i];
    }
  }
  return max;
}
//func to find smallest
int smallest(int arr[], int n) {
  int min=arr[0];
  for(int i=0; i<n; i++) {
    if(arr[i]<min) {
     min=arr[i];
    }
  }
  return min;
}
//func to find mean
float mean(int arr[], int n) {
  int sum=0;
  for(int i=0; i<n; i++) {
   sum=sum+arr[i];
  }
  return sum/n;
}
//func to find median
float median(int arr[], int n) {
  float med;
  //sorting the array
  sort(arr, arr+n);
  //if no. of elements is odd,median=((n+1)/2)th value 
  if(n%2!=0) {
   med= arr[n/2];
  }
  //if no. of elements even, median=(value before median+value above median)/2
  else {
   med= (arr[(n-1)/2] +arr[n/2])/2;
  }
  return med;
}
//func to find elements with highest frequency of all elements
int frequency(int arr[], int n) {
  return n;
}
//driver function
int main() {
  int n, k;
  int arr[n];
  cout << "Enter no. of elements?" << endl;
  cin >> n;
  for(int i=0;i<n; i++) {
   cout << "Enter "<< i+1 <<"th element of an array" << endl;
   cin >> k;
   arr[i]=k;
  }
  cout << "Largest element= " << largest(arr,n) << endl;
  cout << "Smallest element=" << smallest(arr,n) << endl;
  cout << "Mean= "<< mean(arr, n) << endl;
  cout << "Median= " << median(arr,n) << endl;
  cout << "Element with Highest frequency= " << frequency(arr, n) << endl; 
  return 0;
}
