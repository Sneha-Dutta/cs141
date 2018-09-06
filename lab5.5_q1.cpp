//square star pattern
//include the library
#include <iostream>
using namespace std;
//write the main function
int main()
{
//declare a variable for entering no. of stars in each row and column
int n;
cout << "Enter a number" << endl;
cin >> n;
//printing n columns
for (int i=0; i<n; i++)
{
//printing stars in a row
for (int j=0; j<n; j++)
{
cout << "*";
}
cout << endl;
}
return 0;
}
