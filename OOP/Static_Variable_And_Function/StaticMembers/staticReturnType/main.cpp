#include<iostream>

static void Function(){
  std::cout<< "This is Function from main translation unit"<< std::endl; 
} 

using namespace std; 

int main()
{ 
  Function(); 

  return 0; 
}