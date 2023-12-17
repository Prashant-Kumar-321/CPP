#include<iostream>
using namespace std; 

#include"Arithmetic.cpp"
// #include"Arithmetic.h" 

int main(){
  cout<< "A = "<< 2 << " ,B = "<< 8<< endl; 
  cout<< "Addition = "<< add(2, 8)<< endl; 
  cout<< "Substraction = "<< sub(2,8)<< endl; 
  cout<< "Multiplication = "<< multi(2,8)<< endl;

  int b = 7; 
  if(b == 0){
    cout<< "inf"<< endl; 
  }else{
  cout<< "Division = "<< Div(2,b)<< endl; 
  }

  return 0; 
}