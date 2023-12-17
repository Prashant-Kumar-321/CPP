#include<iostream>
using namespace std; 
class A
{
   public: 
    int x; 
}; 

int main()
{
  // Dynamically allocting memory using (new) operator  
  int*p = NULL; 
  p = new int; // one int memory block created 
 *p = 10; 
 cout<<p<< "  *p = "<< *p<< endl; 

 float*q = new float; 
 *q = 20.56; 
 cout<< q<< "  *q = "<< *q<< endl;

 char*ch = new char; 
 *ch = 'D'; 
 cout<< (unsigned long long)ch<< " *ch = "<< *ch<< endl;

 A*a = new A;
 a->x= 80; 
 cout<< a<<  " a -> x = "<< a->x<< endl;  

  delete p; 
  delete q; 
  delete ch; 
  delete a; 
  return 0; 
}