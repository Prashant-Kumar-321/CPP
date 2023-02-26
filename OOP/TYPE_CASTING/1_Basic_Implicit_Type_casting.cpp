#include<iostream>
#include<conio.h>

using namespace std;

// Driver of code 
int main(void) // Not taking any argument 
{
  int Ix = 78.00f; 
  float Fx = 9.34f;
  char ch = 93.97; // double ---> char 
  cout<< "ch = double = "<< ch<< " ascii = "<< int(ch)<< " ascii = "<< (int)ch<< endl;  

  Fx = float(Ix); // Explicitly saying to convert Int(Ix) into float 
  Fx =  Ix;        // it will be converted implicitly internally y compiler 
  ch = Ix;
  int Ascii; 
  Ascii = (int)'a'; // type casting into int from char 


  cout<< "Ascii = "<< Ascii<< endl;  

  cout<< "Fx = "<< Fx<< endl;  
  cout<< "ch = "<< ch<<" , " << int(ch)<<  endl;

  678.90; 
  
  getch(); 
  return 0; 
}
