#include<iostream>
#include<conio.h>
using namespace std; 

class Parent 
{
private: 
  int a; 

public:
  int b;

  Parent(){
    //  cout<< "DC of Parent "<< endl; 
  }

  Parent(int x, int y): a(x), b(y){
    // cout<< "PC of Parent "<< endl; 
  } 

  void display(){
    cout<< "Parent Class display()"<< endl; 
  }
  
  void print(){
        cout<< "Parent class print()"<< endl;  
      }

}; 


class Child: public Parent // Inheriting Parent class publically in Child class 
{
    int c;
  public: 
    int d;

    Child() : Parent() // default constructor of parent is called (by default )
    {
      // cout<< "DC of child "<< endl; 
    } 
    Child(int v, int w, int y, int z) : Parent(y,z)
    {
        // cout<< "PC of Child"<< endl; 
        c = v; 
        d = w; 
    }

     // Function over-riding of parent class 
     void display(){
      Parent::display(); // calling overridden function from child class 
      cout<< "Child class display()"<< endl; 
    }
}; 


// Driver function  
int main()
{
  Parent Par1(3,5); 
  // Par1.display(); // void Parent::display()

  Parent* ParPtr1 =  &Par1; 
  // ParPtr1->display(); // void Parent::display()

  Child chld1(9,20,19,30); 
  // chld1.display(); // void Child::display()
  // chld1.print(); // Since it is not Present in the Child Class, void Parent::print()

  Child *chldPtr1 = &chld1; 
  // chldPtr1->display(); // void Child::display()
  // chldPtr1->print(); // Since it is not present in the child Class, void Parent::pritn()


  /**********************************************************************************/
  //##############  Accessing Overriden function of Parent class   ############### 

  // 1.Access Overridden funtion of Parent class using object of child class  

  // chld1.Parent::display();    // void Parent::display()
  // chld1.Parent::print();   // void Parent::print()

  // 2.Accessing overridden function or member function of Parent class using 
  // Pointer of Parent class pointing Child Class object

  // ParPtr1 = &chld1;    // ParPtr1 -----> (Parent Object) inside chld1 
  // ParPtr1->display();  //void Parent::display();
  // ParPtr1->print() ;    //void Parent::print();  

 // ** Note: - Child class Pointer can't point to the parent object **
 // Child* child = new Parent; // Compile Time Error

 //3. By calling Parent overridden funtion From Child class 
  //class Child {
  //    void display()
  //    {
  //     Parent::displa(); 
  //    }
  // } ; 

  return 0; 
}