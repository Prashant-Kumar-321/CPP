#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

// iterator is an object(like pointe) that points the elements of the constainer;
int main()
{
  string str = "Prashant Kumar Gupta";

//  cout<< "Enter your name : ";
//  getline(cin, str);
//  cout<< "Name = "<< str<< endl;

  // string class iterator declartion
  string::iterator a,b;
  a = str.begin();// return an iterator that points the first elements of the str object
  b = str.end();  //str.end() returns an iterator that points the next address of last element of the string;

  // Accessing each character of string forward iterator
  for(a; a!=b; a++)
    cout<< *a<< " ";
  cout<< endl;
  // reverse iterator
  // rbegin() return iterator pointing to the end element of string
  // rend() return irerator pointing to previous memory location of first element of string;

  // declaring reverse iterator
  string::reverse_iterator p,q;
  p = str.rbegin();
  q = str.rend();

  // Accessing each character of string from back side
  for(p; p!=q; p++)
    cout<< *p<< " ";

  cout<< endl;


  return 0;
}
