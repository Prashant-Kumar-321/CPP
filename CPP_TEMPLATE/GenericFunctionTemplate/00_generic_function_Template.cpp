#include<iostream>
using namespace std; 

// Generic function gonna display value of any dataType ( [<<]  --->  Insertion operator); 
template <typename T> void display(T val){
  cout<< "You have Passed, value = "<< val<< endl; 
}

//Prototype of Generic function Template
template<class T> void printn(T, T); 


int main(int agrc, char*agrv[])
{
  display(23); 
  display(3.7654f); 
  display("Prashant Kumar"); 
  display('P'); 

  printn(23, 67); 
  printn(3.87f, 1.967f); 
  printn("prashant", "Kumar Gupta"); 
  printn('P', 'G'); 

  return 0; 
}


template<class T> void printn(T a,  T b){
  cout<< "a = "<< a<< " and b = "<< b<< endl; 
}