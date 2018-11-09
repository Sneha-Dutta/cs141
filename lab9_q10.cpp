#include<iostream>
#include<cstring>
using namespace std;
int main()
{
  char s[10] = "abcde";
  revString(s);  // call the function
  
  cout << s << endl;
  return 0;
}

void revString(char* ptr)
{
  // WRITE YOUR CODE HERE

  char *ptr1, *ptr2;
  ptr1 = ptr;
  ptr2 = ptr + strlen(ptr) - 1;

  while (ptr1 < ptr2) {
    // swap two chars in the array/cstring
    char temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    
    // advance ptr1 and rewind ptr2
    ptr1++;
    ptr2--;
  }
}

