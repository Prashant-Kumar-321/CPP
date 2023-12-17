#include <iostream>
using namespace std; 

template <class type> class MyClass{
  type p1, p2; 
public: 
  MyClass(type a, type b){
    p1 = a; 
    p2 = b; 
  }

  void display(){
    cout<< "P1 = "<< p1<< " and P2 = "<< p2 << endl; 
  }

};

class MyClass2{
  int a; 
public: 
  MyClass2(int x){
    a = x; 
  }
  void display(){
    cout<< "value of x = "<< a<< endl; 
  }

}; 
//It is not Possible to have two class with same name 
//in same scope or namespace. 
//But it is possible to make it by wrapping them in two differnt namespace; 

// driver function 
int main(void)
{
  MyClass<int> intObj0(23, 46); 
  intObj0.display(); 

  MyClass2 intObj(34); 
  intObj.display(); 

  return 0; 
}