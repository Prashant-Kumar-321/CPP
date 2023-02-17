#include<iostream>
using namespace std; 

int main()
{
  // memory intialization 
  int *p = new int(2079); 
  cout<< "*p = "<< *p<< endl; 

  float *q = new float(55.927f); // new float(20,39)---> error 
  cout<< "*q = "<< *q<< endl; 

  char *condition = new char('Y'); 
  cout<< "*condition = "<< *condition<< endl;

  delete p; 
  delete q; 
  delete condition; 
  
  return 0; 
}