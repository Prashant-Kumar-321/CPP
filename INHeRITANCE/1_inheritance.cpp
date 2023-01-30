#include<iostream>
using namespace std; 

// class definition 
class A
{
 public:
   char gender{'M'}; //default value M
   int a {0};        // default value 0; 

   A(int a, int gen)
   {
    gender = gen; 
    this->a = a;  // this is pointer pointing to current object 
   }
   A() {} // default constructor 

};

class B:public A // syntax====> class class_Name:Access_Modifier parent class Name 
{
  public: 
   int b;
   /***************************************************************************
    char gender (inheret) of A
    int a (inheret) of A
    ****************************************************************************/ 

   B(int x, int y, char gen)
   {
    a = x; 
    b = y; 
    gender = gen; 
   }
   B() {}

};
// A is parent class and B is child class 

// Driver Code 
int main()
{
  A a(20, 'F'); // object creating of A class named a 
  
    /***************************************************************************** 
        ***************************************************************************
     a   *  gender = 'F' , a = 20;                                                *    
       ***************************************************************************  */
  cout<< "Age = "<< a.a<< " Gender = "<< a.gender<< endl; 

  B b(20, 10, 'M'); 
  // b---> gender = 'M', a = 20, b = 10; 

  cout<< "Age = "<< b.a<< " Gender = "<< b.gender<< " Rank = "<< b.b<< endl; 

  return 0; 
}