//rhombus star pattern
//include library
#include <iostream>
using namespace std;
//write the main function
int main()
{
//declare a variable to enter a number
int n;
cout << "Enter a number";
cin >> n;
//number of rows
for (int i=0; i<n; i++)
{
//to print spaces
for (int j=i; j<n; j++)
{ 
cout << " ";
}
//printing n stars
for (int j=0; j<n; j++)
{
cout << "*";
}
//go to next row
cout << endl;
}
return 0;
}
 
