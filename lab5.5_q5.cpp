//Half diamond star pattern
//include the library
#include <iostream>
using namespace std;
//write the main function
int main()
{
//declare a variable for entering a number
int n;
cout << "Enter a number";
cin >> n;
//for upper right triangle
for (int i=0; i<n; i++)
{
for (int j=0; j<=i; j++)
{
//print stars
cout << "*";
}
cout << endl;
}
//for lower inverted right triangle
for (int i=(n-1); i>0; i--) 
{
for (int j=0; j<i; j++)
{
//print stars
cout << "*";
}
cout << endl;
}
return 0;
}
