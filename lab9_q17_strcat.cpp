//Implement your version for strcat
//strcat concatenates two strings
//First include library
#include<iostream>
using namespace std;
//declare a function for strcat
void fstrcat() {
	char a[30],b[15],*m,*p;
	cout << " Enter the first string " << endl;
	cin >> a;
	cout << "Enter the second string " << endl;
	cin >> b;
	p=b;
	m=a;
	while(*m!='\0') 
	m++;
	while(*p!='\0')
	{	 *m=*p;
	     p++;
	     m++;
	     if (*p=='\0')
	     *m='\0';
	 }
	 m=a;
	 cout << "Resulting string is " << endl;
	 while(*m!='\0') {
             cout << *m;
             m++;
         }
	 
}
//write the main function
int main() {
	fstrcat();
	cout << endl;
	return 0;
}
