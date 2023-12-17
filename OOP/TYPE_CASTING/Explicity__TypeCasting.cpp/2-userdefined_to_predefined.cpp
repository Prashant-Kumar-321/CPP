/*
   userdefinied ------>  Predefined 
   Userdefined -> Class -> overload ===> operator int/char/float/double (any one)
*/
#include<iostream>
using namespace std; 
class Rupee
{
   int r; // private instance variable 

   public:
   Rupee(): r(0)  //dc
   {   } 
   Rupee(int a): r(a) // pc
   {   }

   operator float() // return type ===> int
   {
     cout<< " float operator called "<< endl; 
     return r; 
   }

  //  operator char()
  //  {
  //   cout<< "char operator called "<< endl; 
  //   return char(r); 
  //  }

  //  operator int ()
  //  {
  //   cout<< "int operator called"<< endl; 
  //   return r; 
  //  }

  //  operator double()
  //  {
  //   return r; 
  //  }

    void display()
    {
      cout<< "Rupees = "<< r<< endl; 
    }   
}; 

// Driver code 
int main()
{
  Rupee R1 =  125.32; 

  int x    = R1; // Intializing predefined datatype with user defined data type
  char ch  = R1; 
  float fl = R1;  

  R1.display(); 
  cout<< "ch = "<< ch<< endl;
  cout<< "fl = "<< fl<< endl;  
  cout<< " x = "<< x<< endl; 
 
  return 0; 
}
