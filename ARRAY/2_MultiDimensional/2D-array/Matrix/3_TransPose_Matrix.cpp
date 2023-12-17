#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std; 

int main(void)
{
  float arr[10][10]; 
  float Tarr[10][10]; 
  int m,n; 

  cout<< "Enter Order of matrix : "; 
  cin>>m>>n; 

  cout<< "Enter "<<m*n<< " elements "<< endl; 
  for(int i=0; i<m; i++)
    for(int j=0; j<n; j++)
      cin>>arr[i][j];
  
  // Transpose finding of matrx
  for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)
      Tarr[i][j] = arr[j][i]; 
  
  // displaying Elements of Transpose array
  cout<< "Transpose of Matrix: "<< endl; 
  for(int i=0; i<n; i++)
  { 
    cout<<"[ "; 
    for(int j=0; j<m; j++)
        cout<<setw(3)<<Tarr[i][j] <<" "; 

    cout<<" ]"<< endl; 
  }
   
      
  getch(); 
  return 0; 
}