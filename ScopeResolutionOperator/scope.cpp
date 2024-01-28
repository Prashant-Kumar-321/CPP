#include<iostream>
using namespace std; 

int main ()
{
  {
    int x = 10; // it has scope with the first block 
    // life time as long as first block remains 
    cout<< "From First Block"<< endl; 
    cout<< "X = "<< x<< endl; 
  }
  // x will destroy as soon as first block finishes

  // cout<< "X = "<< x<< endl; Compilation error Identifier x is undefined 

  {
    int x = 20; // it has scope within second block 
    // life time as long as second block remains  
    cout<< "From Second Block"<< endl; 
    cout<< "X = "<< x<< endl; 
  }
  // x will destroy as soon as second block finishes 


  return 0; 
}