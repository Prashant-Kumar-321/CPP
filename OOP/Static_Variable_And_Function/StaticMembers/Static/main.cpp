#include<iostream>
#include"static.hpp"
using namespace std; 

int main()
{ 
  MyClass obj; 
  obj.static1(); 
  obj.static2(); 

  cout<< MyClass::getCount()<< endl; 


  return 0; 
}