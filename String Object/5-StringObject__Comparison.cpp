#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

int main()
{
  char str1[10] = "ABC", str2[10] = "PQR";

  cout<< " comparison "<< strcmp(str1,str2)<< endl<< endl;
  // strcmp() return 1 or -1 or 0(if both are same );

  string a,b;
  a = "ABC";
  b = "PQR";1

  int ans = a >= b ;// false
  ans = a <= b; // true
  ans = a == b; // false (is both string identical)
  ans = a != b ; // true (both string are not identical)
  cout<< "ans = "<< ans << endl;

  // Accessign string object using pointer
  string *p = &a;
  cout<< " "<< *p<< endl ; // both are same
  cout<< " "<< p[0] ;

  return 0;
}
