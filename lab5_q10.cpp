//31. Write a C++ program to count number of digits in any number. 
#include <iostream>
using namespace std;
int main()
{
int n;
cout << "Enter any number" << endl;
cin >> n;
int i=0;
while ((n%10>=0) && (n>0))
{
i=i+1;
n=n/10;
}
cout << "Numbers of digits=" << i << endl;
return 0;
}

