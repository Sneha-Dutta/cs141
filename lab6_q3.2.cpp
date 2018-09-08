//call by reference
//maximum
#include<iostream>
using namespace std;
void maxnum( int& a, int& b, int & max) {
if (a>b) {
max= a;
}
else {
max= b;
}
}
int main() {
int n1, n2, mxm;
cout << "Enter two numbers";
cin >> n1 >> n2;
maxnum( n1,n2, mxm);
cout << "Maximum=" << mxm << endl;
return 0;
}
