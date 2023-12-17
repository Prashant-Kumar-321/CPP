#include<iostream>
using namespace std; 

class Maximum
{
  public: 
    template<class T>
    T max(T a, T b)
    {
      return (a>b) ? a: b;
    }
}; 

int main(void)
{
  Maximum m1; 

  cout<< "Maximum = "<< m1.max<int>(4,9)<< endl; 
  cout<< "Maximum = "<< m1.max<float>(3.1198,3.1289)<< endl; 

  return 0; 
}