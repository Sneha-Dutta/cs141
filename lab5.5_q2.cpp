//Right triangle star pattern
//Include the library
#include <iostream>
using namespace std;
//Write the main function
int main()
{
int n;
cout << "Enter a number" << endl;
cin >> n;
for ( int i=0; i<n; i++)
{
for (int j=0; j<=i; j++)
{
cout << "*";
}
cout << endl;
}
return 0;
}


