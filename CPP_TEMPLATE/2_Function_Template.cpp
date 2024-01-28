#include<iostream>
using namespace std; 

class Maximum
{
  public: 
    template<class T>
   static T max(T a, T b)
    {
      return (a>b) ? a: b;
    }
}; 

// swap method for different data type 

// if i want to swap two int value 
void Swap(int& a, int& b)
{
  int temp = a; 
  a = b; 
  b = temp; 

  cout<< "Int Swap function "<< endl; 
}


template<class ty>
void Swap(ty& a, ty& b)
{
  ty temp = a; 
  a = b; 
  b = temp; 
  cout<< "Generic Swap function"<< endl; 
}

// Overriding the template function for specific type 
// swap value of two float variable 
void Swap(float& a, float& b)
{
  float temp = a; 
  a = b; 
  b = temp;
  cout<< "Float Swap function "<< endl;  
}


int main(void)
{
  // cout<< "Maximum = "<< Maximum::max<int>(4,9)<< endl; 
  // cout<< "Maximum = "<< Maximum::max<float>(3.1198f,3.1289f)<< endl;

  // int a=100, b=250; 
  // Swap(a,b); 
  // cout<< "A = "<< a<< " and B = "<< b<< endl; 


  int num1 = 30.34f; 
  int num2 = 3.20f; 

  Swap(num1,num2); // Int overriden function will be called 

  cout<< "num1 = "<< num1<< endl; 
  cout<< "num2 = "<< num2<< endl;  



  char ch1 = 'R'; 
  char ch2 = 'P'; 
  Swap(ch1, ch2); // Generic Swap function 


  return 0; 
}