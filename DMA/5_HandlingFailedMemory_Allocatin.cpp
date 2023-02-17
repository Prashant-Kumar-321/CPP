#include<iostream>
using namespace std; 

int main()
{
  // Variable size Array; 
  int size; 
  cout<< "Enter Student count"<< endl; 
  cin>>size; 
  int num[size]; // Variable size array; 

  int j; 
  for(j=0; j<size; j++)
     num[j] = j+1*3; 

  for(j=0; j<size; j++)
     cout<< num[j]<<" "; 


  int* p = new(nothrow) int(10); 

  if(!p)
   cout<< " Memory Allocation failed "<< endl; 

  else 
  cout<< "Number "<< *p<< endl; 


  delete p; 
  p = new(nothrow) int [10];

  int i; 
  if(!p) // if memory allocation failed 
  {
    cout<< "This much Memory is currently not aviable in your system "<<endl; 
    cout<< "Please close some Application "<< endl; 
    exit(0);
  }

  for(i=0; i<10; i++)
    p[i] = (i + 1) * 2; 
  
  for(i=0; i<10; i++)
    cout<< p[i]<< "  "; 

 delete[] p; 

  return 0; 
}