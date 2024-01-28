#include<iostream>
using namespace std; 


/*Note 
  ::x will always refere to the global x 
  if no global x then there will be compilation error 
*/

int x = 10; // global variable 

int main (int argc, char** argv) 
{ 
  int x = 20; 

  {
    int k = x; // 20 
    int x = 30; 

    cout<< "We are in the Inner Block"<< endl; 
    cout<< "k = "<< k<< endl; //  20; 
    cout<< "x = "<< x<< endl; // 30 
    cout<< "::x = "<< ::x<< endl; // 10;
  }


  cout<< "We are in the main function "<< endl; 
  cout<< "x = "<< x<< endl; 
  cout<< "::x = "<< ::x<< endl; 

  cin.get(); 
  return 0; 
}

/*Expected output 
  We are in the Inner Block 
  k = 20
  x = 30 
  ::x = 10 

  We are in the main function 
  x = 20 
  ::x = 10 
*/