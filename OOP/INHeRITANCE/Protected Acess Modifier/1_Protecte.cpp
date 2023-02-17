#include<iostream>
using namespace std; 

class A
{
    private: 
      int x = 1; 
    protected: 
      int y = 2; 
    public: 
      int z; 
      void display()
      {
        cout<< x<< " "<< y<< " "<< z<< " "<< endl; 
      }
}; 

class B : public A
{
  public: 
    void display()
    {
      // cout<< x<< endl; // private member of parent not accessible 
      A::display();  
      cout<< y<< endl; 
      cout<< z<< endl; 
      
    }

}; 

class C : protected A
{
  public: 
  int x = 76; 
  void display()
  {
    // cout<< x<< endl; // private member cann't be accessed 
    cout<< y<<endl; 
    cout<< z<< endl;
    cout<< x<< endl;  
  }
}; 

// Driver function 
int main()
{ 
  A a; 
  // a.x = 6; private inaccessible outside class  
  // a.y = 3; protected = private outside class 
  a.z = 10; 
  // a.display(); 

  B b; 
  b.z = 80; 
  b.display(); 

  C c; 
  // c.y = 10;  // protected member cann't be accessed outside the class 
  // c.z = 109;  // " " "  " "  " " " "  "
  c.display(); 
  c.x= 90; 

  return 0; 
}