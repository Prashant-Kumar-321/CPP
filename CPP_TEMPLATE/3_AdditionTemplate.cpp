#include<iostream>
using namespace std; 

template<class A1, class A2>// typename A has default datatype int 
class Addition         // Now Addition class has become template class 
{
  protected: 
    A1 x; 
    A2 y;  
  public:
    Addition ()
    {

    } 
    Addition(A1 a, A2 b)
    {
      x = a; 
      y = b; 
    }
    A1 add() // instance member function 
    {
      return (x+y); 
    }
};


int main()
{
  // Addition <int> a(8,7); 
  // cout<< "Sum = "<<a.add()<< endl;

  // Addition <float>a1(8.9,2.36); 
  // cout<< "Sum = "<< a1.add()<< endl; 

  Addition <float,int> Aa1(7.25,7);
  cout<< "Sum = "<<Aa1.add()<< endl;

  Addition <char, int> a1('A', 5); 
  cout<< "Sum = "<< a1.add()<< endl; 

  Addition <int,int>a2(2,76); 
  cout<< "Sum = "<< a2.add()<< endl; 

  Addition <int, float> a3(5,3.87); 
  cout<< "Sum = "<< a3.add()<< endl; 

  return 0; 
}