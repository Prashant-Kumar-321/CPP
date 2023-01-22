#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
  char a[10]; // char array
  string b = "Prashant";   // object of string class

  cout<< "Enter str1 : ";
  cin>> a; // it will take string input but it will treat "space " "tab" and "enter" as seperator;

  cout<< "Enter str2 : ";
  cin>> b;// it will take string input but it will treat "space " "tab" and "enter" as seperator;
  // cin Accesses illigeal memory;

  cout<< "strings \n";

  cout<< a<< endl;
  cout<< b<< endl;

  return 0;
}
