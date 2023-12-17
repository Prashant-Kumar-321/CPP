#include<iostream>
using namespace std; 

int main()
{ 
   int a,b,c; 
   a = 10,b=20,c=30; 

   // Creating Dynamic array of pointer (to integer)
   int**arr = new int*[3]; // array of pointer of size 3; 
   arr[0] = &a; 
   arr[1] = &b; 
   arr[2] = &c; 
  
   int i; 
   for(i=0; i<3; i++)
    cout<<arr[i][0]<< " "; 

   cout<< "\n"; 
   for(i=0; i<3; i++) 
     cout<<*arr[i]<< " "; 
  
    int *p = NULL; 
    
    cout<<endl<< arr<<endl; 
    delete[] arr;
    cout<< arr << endl; 
    delete[] arr;  
    delete p; 

  return 0; 
}