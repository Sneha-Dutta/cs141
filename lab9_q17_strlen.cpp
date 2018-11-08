//Implement your version for strlen
//First include library
#include<iostream>
using namespace std;
//declare function for strlen
int fstrlen(char a[])
{ 
	char *p;
	int i=0;
	p=a;
	while(*p!='\0')
	{ i++;
          p++;
         }
	return i;
}
//write the main function
int main()
{
	int k;
        //character array to store the string
	char a[15];
        //ask user to enter the string
	cout << "Enter your string " << endl;
	cin >> a;
        //calling the function 
	k=fstrlen(a);
	cout<<"The string length is " << k << endl;
	return 0;
}
