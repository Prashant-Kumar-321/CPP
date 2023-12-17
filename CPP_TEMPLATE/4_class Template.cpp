#include<iostream>
using namespace std; 

namespace STD
{
  int STD; 
  template<class T>
  class printFactors; //template class Declaration 
}

// template class definition of STD namespace 
template<class T> // must syntax
class STD::printFactors
{
    bool is_Prime(int x)
    {
      int i=2; 
      for(; i<=x/2; i++)
        if(x%i == 0)
          return false; // x is not prime number ; 
      
      return true; // i.e x is prime number 
    }
    public: 
      T x; 

      void diplyFactors()
      {
        cout<< "Prime Factors of "<<x<< " are:------- "<< endl; 
        for(int i = 2; i <= x/2; ++i)
          if(x % i == 0)
          {
            if(is_Prime(i))
              cout<< i<< " "; // i is prime factor 
          }

        // int i = 1;     
        // while(i<=x/2)
        // {
        //   if(x%i == 0)
        //       cout<< i<< " , "; 
        //   i++; 
        // }
        
         if(is_Prime(x))
         cout<< x<< endl;  
      }
}; 
using namespace STD; 

// Driver code 
int main(void)
{
  printFactors<int> num1; 
  cout<< "Enter a number "; 
  cin>>num1.x; 
  // num1.x = 12; 
  num1.diplyFactors(); 

  return 0; 
}

