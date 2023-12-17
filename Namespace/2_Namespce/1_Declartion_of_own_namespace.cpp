#include<iostream>
using namespace std; 

const int MAX = 4000;

//Own namespace 
namespace MyNamespace
{
  int x = 50; 
  string favColor = "Purple"; 
  // favColor = "purple"; Error:

  int add(int, int);
  class ABC; 
  struct MyStruct; 

  void greetPeople(void){
    int x= 40; 
    cout<< x<< " "; 
    cout<< "Hello sir welcome to our resturant"<< endl; 
  }

}

int MyNamespace::add(int x, int y){
  int sum ; 
  sum = x+y; 
  return sum ; 
}

class MyNamespace::ABC
{
  int x = 10;  
  int y = 20; 
public:
  ABC(int a, int b){
    x = a;
    y = b; 
  }
  ABC(){}

  void print(){
    cout<< "x = "<< x<< endl; 
    cout<< "y = "<< y<< endl; 
  }

};

using CBA = MyNamespace::ABC; 
 
struct MyNamespace::MyStruct{
  int x; 
  int y; 
  bool enabled; 
}; 

using namespace MyNamespace; //Global using directive declaration 
//Type Aliasing; 
// using MyStruct = MyNamespace::MyStruct; 

int main()
{
  // using namespace MyNamespace;  // Local using directive declartion
  // cout<< "x of MyNamespace namespace = "<< x<< std::endl; 
  // cout<< "5+6 = "<< MyNamespace::add(5,6)<< endl;
  // greetPeople();
  
  // ABC obj1, obj2(40, 80);   
  // obj1.print(); 
  // obj2.print();   
  ABC obj1;
  CBA obj2;  

  struct MyStruct s1, s2 = {30, 60, false}; 
  s1.enabled = true;
  s1.x = 40; 
  s1.y = 50; 

  cout<< "x = "<< s1.x<< endl; 
  cout<< "y = "<< s1.y<< endl; 
  cout<< "enabled = "<< s1.enabled<< "\n"<< endl; 

  cout<< "x = "<< s2.x<< endl; 
  cout<< "y = "<< s2.y<< endl; 
  cout<< "enabled = "<< s2.enabled<< endl; 



  return 0; 
}



/*Important Note
  Variables must be declared inside a function or
  class to assign them.
  It is not allowed to assign a variable outside
  the "class" or a "function" in CPP Language; 
*/