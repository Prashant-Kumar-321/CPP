#include<iostream>
using namespace std; 

typedef void (*FunPtr)(int, int); 
// FunPtr = void (*FunPtr)(int, int); 
// i created Function pointer type to a function having void return type and taking two int argument  


void add (int num1, int num2)
{
  cout<< num1 << " + "<< num2<< " = "<< num1+num2<< endl; 
}

void subtract (int num1, int num2)
{
  cout<< num1<< " - "<< num2<< " = "<< num1-num2<< endl; 
}

void greetHello (const std::string& name); 

int main ()
{ 
  // int (*FunPtrint (int)); // Prototype of fun taking one int argument and return tupe is pointer to int 
  // int (*FunPtr)(int x) = nullptr; // Function Ptr; 
  
  FunPtr addPtr = add; 
  FunPtr subPtr = subtract; 

  // addPtr(2, 8); 
  // subPtr(8, 2); 

  // void (*greet)(const std::string&) = nullptr; 
  // greet = greetHello; 
  // cout<< "Address = "<< greet<< endl; 
  // greet("Prashant"); 


  // Array of function pointers 
  float (*operations[5])(float a, float b); 
  for(int i=0;i<5; i++){
    cout<< operations[i]<< " "; 
  }
  
  // int* intptr; 
  // int* intptrs[5]; // Array of 5 Pointer to int (i.e each element is a Poninter to int itself)
  // int (*intptrss)[10]; // Pointer to an array of 10 sizes 

  return 0; 
}

void greetHello (const std::string& name)
{
  cout<< "Hello "<< name<< "! How are you ? "<< endl; 
}