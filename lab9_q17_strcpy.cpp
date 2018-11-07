//Implement your version for strcpy
//first include library
#include<iostream>
using namespace std;
//declare a function for strcpy
 void fstrcpy() { 
        //strcpy is used to copy strings
        char a[20],*p,*m,ca[20];
	cout << "Enter a String " << endl;
	cin >> a;
	m=a;p=ca;
	while(*m!='\0')
	{	*p=*m;
		 p++;
		 m++;
		 if (*m=='\0')
		 *p='\0';
	}
	cout << "printing copied string" << endl; 
	p=ca;
	while(*p!='\0') {
             cout<<*p;p++;
        }
}
//Write the main function
int main()
{ 
	fstrcpy();
	cout << endl;
        return 0;
}
