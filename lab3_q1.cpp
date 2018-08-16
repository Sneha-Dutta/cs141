//First include the library
#include <iostream>
using namespace std;
//Write the main function
int main() {
//declaring primitive data types and print its size
int a=2;
cout << "integer a=" << a << endl;
cout << "Size of integer="<< sizeof(int) << endl;
float b=2.6;
cout << "float b=" << b << endl;
cout << "Size of float="<< sizeof(float) << endl;
double d=153.689;
cout << "double d=" << d << endl;
cout << "Size of double="<< sizeof(double) << endl;
char c='c';
cout << "character c=" << c << endl;
cout << "Size of char="<< sizeof(char) << endl;
wchar_t w= 'A';
cout << "Wide character=" << w << endl;
cout << "Size of wchar_t="<< sizeof(wchar_t) << endl;
return 0;
}
