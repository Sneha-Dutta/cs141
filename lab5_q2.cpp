//First include the library
#include <iostream>
using namespace std;
//Write the main function
int main()
{
//Ask the user for two numbers
int n1, n2;
cout << "Enter two numbers" << endl;
cin >> n1 >> n2;
//Check which number is greater and print the greater number
if (n1>n2) {
cout << n1 << " is maximum" << endl;
}
else if (n1<n2) {
cout << n2 << " is maximum" << endl;
}
else {
cout << "Both numbers are equal" << endl;
}
return 0;
}
