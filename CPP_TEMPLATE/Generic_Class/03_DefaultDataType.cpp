#include<iostream>
using namespace std; 

// Generic Template class with Default Data type
// Default type must be specified from right side 

template <class _Type1 = string, class _Type2 = int>
class MyClass{
 _Type1 mem1; 
 _Type2 mem2; 
public:
  MyClass(_Type1 p1, _Type2 p2){
    mem1 = p1;
    mem2 = p2;  
  }
  void print(){
    cout<< mem1<< " and "<< "\n"<< mem2<< "\n"<< endl; 
  }
}; 

//Defining variable in template definition 
template<class T, int size /*variable*/> class Array{
public: 
  Array(){
    cout<< "Size = "<< size<< endl; 
  }
  void print(){
    cout<< size; 
  }

}; 
// size can be variable, pointer, reference --> known as non-type template 
// parameter 

namespace std
{
  //Explicit Specialization of Generic class 
  template<class _type> class Mobile
  {
    _type mem1; 
  public:
    Mobile(_type property){
      cout<< "Generic Template class is used "<< endl;
      mem1 = property; 
    }
    void display(){
      cout<< "Member value = "<< mem1<< endl; 
    }
  }; 
}
  //Explicitly Specializing  Mobile Generic class for int version
  // We can change it's definition entirely 
  template<> class Mobile<int>
  {
    int mem1; 
  public: 
    Mobile(int pro){
      cout<< "int Version of Generic class is used "<< endl;
      mem1 = pro; 
    }

    void display(){
      cout<< "Member value = "<< mem1<< endl; 
    }

  };



// Driver function 
int main(int agrc, char**agrv)
{
  // MyClass<> obj1("Programming", 200); // using default dataType
  // MyClass<float> obj2(3.141592, 3);   // using second type of default type
  // MyClass<int, string> obj3(3021, "C++ Programming Language"); // explicityly telling the both generic dataType

  // obj1.print(); 
  // obj2.print(); 
  // obj3.print(); 

  //Array object 
  // Array<int, 10> arr;
  // arr.print(); 

  Mobile<string> strObj("Coding"); 
  Mobile<int> intObj(2300); 


  return 0; 
}


/*
*
*
*/