#include<iostream>
using namespace std; 

int main()
{
  cout<< "Hello World "<< endl; 
  
  static int a, b; 
  cout<< "Enter two Numbers : "; 
  cin>> a>> b; 

  cout<< a<< " + "<< b<< " = "<< (a+b)<< endl; 


  return 0; 
}