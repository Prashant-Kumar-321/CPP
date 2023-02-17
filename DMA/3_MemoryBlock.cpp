#include<iostream>
#include<cstring>
using namespace std; 

int main()
{
  int*p = new int[10]; 
  // Dynamically arrray will be created of int type of 10 size 
  cout<< "Enter 10 number "<< endl; 
  for(int i = 0; i<10; i++)
    p[i] = i+1; 
  
  for(int i=0; i<10; i++)
    cout<< p[i]<< "  ";
  
  char *name = new char[20];// Dynamically created and character array declared  
  strcpy(name , "Prashant"); 
  cout<< "\nName = "<< name<< endl; 

  // Freeing memory: Dynamically allocted memory block 
  delete []p; 
  delete []name;

  // alloacting 2d array Dynamically 
  const int n = 2; 
  int (*mtrx)[2] = new int[n][n]; 

  for(int i=0; i<2; i++)
    for(int j=0; j<2; j++)
      mtrx[i][j] = (i+j+1)*8; 

  for(int i=0; i<2; i++)
  {
      for(int j=0; j<2; j++)
         cout<< mtrx[i][j]<< " "; 
      
      cout<< endl; 
  }
  delete[]  mtrx; 

  return 0; 
}