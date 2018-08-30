//30. Write a C++ program to print multiplication table of any number. 
#include <iostream>
using namespace std;
int main()
{
int n;
cout << "Enter any number" << endl;
cin >> n;
int i, p;
for (i=1; i<=10; i++)
{
p=n*i;
cout << n << "*" << i << "= " << p << endl;
}
return 0;
}

