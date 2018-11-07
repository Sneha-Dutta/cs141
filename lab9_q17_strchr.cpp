//Implement your versions for strchr
//First include library
#include<iostream>
using namespace std;
//declare a function for strchr
int fstrchr(char a[],char c)
{
        //strchr is used to find occurence of a character in a string
	char *p;int n=0;
	p=a;
	while(*p!='\0')
	{
		if(*p==c)
		n++;
		p++;
	}
	return n;
}
//Write the main function
int main()
{
		char a[15],c;
		int k;
		cout << "Enter your string " << endl;
		cin >> a;
		cout << "Enter the character you want to search " << endl;
		cin >> c;
		k= fstrchr(a,c);
		cout<<"no of times " << c << " repeats in the string = " << k << endl;
		return 0;
}
