//First include the library
#include <iostream>
using namespace std;
//Write the main function
int main ()
{
//Declare a variable and ask to input its value
int a;
cout << "Enter a number" << endl;
cin >> a;
//Check whether the no. is positive, negative or zero
if (a>0) {
cout << "Number is positive" << endl;
}
else if ( a<0) {
cout << "Number is negative" << endl;
}
else if (a==0) {
cout << "Number is zero" << endl;
}
return 0;
}

