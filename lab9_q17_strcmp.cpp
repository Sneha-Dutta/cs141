//Implement your version for strcmp
//First include the library
#include<iostream>
using namespace std;
int fstrlen(char a[])
{ 
	char *p;
	int i=0;
	p=a;
	while(*p!='\0')
	{i++;p++;}
	return i;
}
//declare a function for strcmp
int fstrcmp()
{
        //strcmp compares two string character by character
	char a[30],b[15];
	cout << "Enter the first string " << endl;
	cin >> a;
	cout << "Enter the second string " << endl;
	cin >> b;
	if (fstrlen(a)==fstrlen(b))
	{   char *m,*p;
		m=a;p=b;
		while(*m!='\0')
		{
			if (*m!=*p)
			{return 0;}
			m++;p++;
		}
		return 1;
	}	
	else 
	return 0;			
}
//Write the main function
int main()
{
	int k;
	k=fstrcmp();
	if (k==1)
	cout << "Both the strings are equal" << endl;
	else 
	cout << " Unequal strings" << endl;
	cout << endl;
	return 0;
}
