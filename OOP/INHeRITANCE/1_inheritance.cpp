#include<iostream>
using namespace std; 

// class definition 
class A
{
 public:
   char gender = 'M'; // default value M
   int a = 0;         //  default value 0; 

   A(int a, char gen)
   {
    gender    = gen; 
    (*this).a = a;  // 'this' is pointer pointing to current object 
   }
   A() {} // default constructor 

};

class B : public A // syntax for inheritance ====> class class_Name:Access_Modifier parent_class_Name 
{
  public: 
   int b;
   /***************************************************************************
    char gender (inherited) of A
    int a (inherited) of A
    ****************************************************************************/ 

   B(int x, int y , char gen): A(y,gen) // Base class constructor called of two parameter
   {
    b = x; 
   }

   B(){} // Compiler will implicitly invoke the default constructor of Parent(Base) Class 

};
// A -> Parent Class 
// B-> Child class 

// Driver Code 
int main()
{
  A a(20, 'F'); // object creating of A class named a 
  
    /*********************************************************************** 
       a gender = 'F' , a = 20;                                                
     ***********************************************************************/
  cout<< "Age = "<< a.a<< " Gender = "<< a.gender<< endl; 

  B b(70, 10, 'M'); 
  // b---> gender = 'M', a = 20, b = 10; 

  cout<< "Age = "<< b.a<< " Gender = "<< b.gender<< " Rank = "<< b.b<< endl; 

  return 0; 
}