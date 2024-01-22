#include<iostream>
using namespace std; 

void fun_StaticLocalVariable()
{
  int x = 10; 
  static int y = 10; // static Local Variable 

  ++x; 
  ++y; 

  cout<< "x = "<< x<< ", y = "<< y<< endl; 
}


int main()
{
  for(int i=0; i<5; ++i){
    fun_StaticLocalVariable(); 
  } 

  return 0; 
}

