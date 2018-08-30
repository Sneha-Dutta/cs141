// Write a C++ program to find sum of all odd numbers between 1 to n. 
#include <iostream>
using namespace std;
int main()
{
int n;
cout << "Enter a number n" << endl;
cin >> n;
int i=1;
int s=0;
while (i<=n)
{
//check whether the no. is odd
if (!(i%2==0))
{
//Add the odd number
s=s+i;
}
++i;
}
cout << "Sum of required odd numbers= " << s << endl;
return 0;
}
