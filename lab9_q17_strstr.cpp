//implement your version for strstr
//first include library
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
//declaring a function for strstr
int fstrstr(char a[],char b[])
{
	char *p,*q,*r;
	int l=fstrlen(b),n=fstrlen(a);
	l=n-l+1;
	p=a;
	while(*p!=a[l])
	{
		q=b;
		if(*p==*q)
		{
			r=p;
			while(*q==*r && *q!='\0')
			{r++;q++;}
		    if(*q=='\0')
		    return 1;
		 }
		 p++;
	 }
	 return 0;
}
//write the main function
int main()
{
		int k;
		char a[15],b[15];
		cout<<"Enter your main string " << endl;
		cin>>a;
		cout<<"Enter substring " << endl;
		cin>>b;
		k=fstrstr(a,b);
		if (k==1)
		   cout<<"The given substring is present in the string" << endl;
		   else 
		   cout<<"Given substring is not present in the string" << endl;
	   return 0;
} 
