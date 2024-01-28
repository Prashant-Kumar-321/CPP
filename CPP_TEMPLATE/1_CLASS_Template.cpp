#include<iostream>
using namespace std; 

// template <class T>
template <class T1, class T2, class T3 = float>
class Addition  // template class 
{
  public: 
    T3 add(T1 a, T2 b)
    {
      return (a+b); 
    }
}; 

template<class T1, class T2> 
class Subtraction 
{
public: 
  T1 calculate(T1 num1, T2 num2); 
};

template<typename T1, typename T2>
T1 Subtraction<T1, T2>::calculate(T1 num1, T2 num2)
{
  return (num1 - num2); 
}


int main(void)
{

  // Subtraction Generic Class 
  Subtraction<int,int> subObj; 
  cout<< "Subtraction Result = "<< subObj.calculate(10, 30)<< endl; 


  // Addition <int>a; 
  // Addition <float>b;
  // Addition <double>c;
  // Addition <char>d;   

  // int sum = a.add(9,5); 
  // cout<< "Addition Result = "<< sum << endl;

  // float sum = b.add(5.91, 4.28); 
  // cout<< "Additon Result = "<< sum << endl;

  // cout<< "Addition Result = "<< c.add(8.23, 1.45)<< endl; 

  // cout<< "Addition Result = "<< d.add('a', 2)<< endl;   


  // Addition <float,int,float>a; 
  // cout<< "Addition Result = "<< a.add(5.39,2)<< endl;

  // Addition <int, float,float>b; 
  // cout<< "Addition Result = "<< b.add(89,1.97)<< endl;

  // Addition <int, int,  int>c; 
  // cout<< "Addition Result = "<< c.add(8,5)<< endl; 

  return 0; 
}