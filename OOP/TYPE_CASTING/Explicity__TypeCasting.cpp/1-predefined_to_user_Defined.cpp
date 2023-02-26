/* ***************************************************************** ***
* Converting prdefined datype into user defined data type            ***
* This is done:-!                                                    ***
* Using Constructor                                                  ***
* This is just intializing my class object using prdefined data type *** 
******************************************************************** ***/
#include<iostream>
#include<conio.h>
using namespace std; 

class Rupees
{
  private: 
     int r; 

  public: 
    Rupees(int a):r(a) // Initializer list 
    {
      cout<< "Rupees PC called"<< endl; 
    }

    void display()
    {
      cout<< " Rs = "<< r<< endl; 
    }
}; 

// Driver code
int main()
{
  Rupees R1 = 45; // predefined ---> user-defined ;
 // Here PC of 1 _arg__ will be called ; i.e Rupees(45);  

  R1 = 34; 
  R1.display(); 

  return 0 ; 
}

