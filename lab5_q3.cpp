//First include the library
#include <iostream>
using namespace std;
//Write the main function
int main()
{
//Declare a variable and ask to enter a number
int n;
cout << "Enter a number" << endl;
cin >> n;
//check whether the no. is divisible by both 5 and 11
if ((n%5==0) && (n%11==0)) {
cout << "Number is divisible by both 5 and 11 " << endl;
}
//if no. not divisible by 11
else if ((n%5==0) && (n%11>0)) {
cout << "Number is not divisible by 11 " << endl;
}
//if no. not divisible by 5
else if ((n%5>0) && (n%11==0)) {
cout << "Number is not divisible by 5" << endl;
}
//if no. not divisible by 5 or 11
else {
cout << "Number is divisible neither by 5 nor by 11" << endl;
}
return 0;
}
