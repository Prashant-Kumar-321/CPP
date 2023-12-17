#include<iostream>
#include<conio.h>
using namespace std; 

int main()
{
  int M1[10][10], M2[10][10], M1M2[10][10]; 
  unsigned short  m,n,p,q; // Order of matrix
  int i,j,k, sum = 0;  // to iterate loop 

  cout<< "Enter order of 1st Matrix 1: "; 
  cin>> m>>n; 
  cout<< "Enter "<< (m*n)<< " elements"<< endl; 
  for(i=0; i<m; i++) // reading elements in first Mtrx
    for(j=0; j<n; j++)
      cin>> M1[i][j]; 

  cout<< "Enter order of 2nd Matrix : "; 
  cin>> p>> q; 

  // checking mtrx multiplication is possible or not 
  if(p != n)
  {
    cout<< "Matrices can't be multiplied with each other "<< endl; 
    exit(0); // exit from program 
  }

  cout<< "Enter "<< p*q<< " elements "<< endl; 
  for(i=0; i<p; i++)
    for(j=0; j<q; j++)
      cin>> M2[i][j]; 
  
  // Matrix Multiplication 
  for(i=0; i<m; i++)
    for(j=0; j<q; j++)
    {
      for(k=0; k<p; k++)
      {
        sum += M1[i][k]*M2[k][j]; 
      }
      M1M2[i][j] = sum ; 
      sum = 0; 
    }
  
  // displaying resultant matrix
  cout<< "Resultant Matrix M1.M2 = "<< endl; 
  for(i=0; i<m; i++)
  {
    for(j=0; j<q; j++)
      cout<< M1M2[i][j]<< "  "; 
    
    cout<< endl; 
  }
  
  getch(); 
  return 0;
}