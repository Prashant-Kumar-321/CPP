#include<iostream>
using namespace std; 

// #include"my_computation.hpp" Error --> Undefined reference 
#include"my_computation.cpp" // Indirectly includeing my_computation header file in the main.cpp via .cpp file 

int main(int argc, char*argv[])
{
  Point P = {2,3,1};
  Point Q = {9,7,-3};

  std::cout<< point_Distance(P, Q)<< " units"<< std::endl; 
  // cout<< "Double of 3 = "<< doubleNum(3)<< endl; 
  // cout<< "Celcius Temperature = "<< faherenheit_to_Celcius(-42.0F)<< endl;  
  std::cout<< "Area of Rectangle(3,8) = "<< Area_Rectangle(3,8)<<" Square units "<< std::endl; 
  std::cout<< "macros PRASHANT = "<< PRASHANT << std::endl; 

  return 0; 
}