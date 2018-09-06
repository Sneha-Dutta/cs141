//inverted right angle star pattern
//include the library
#include <iostream>
using namespace std;
//write the main function
int main()
{
//declare a variable for entering a number
int n;
cout << "Enter a number" << endl;
cin >> n;
for (int i=n; i>0; i--)
{
for ( int j=0; j<i; j++)
{
cout << "*";
}
cout << endl;
}
return 0;
}
