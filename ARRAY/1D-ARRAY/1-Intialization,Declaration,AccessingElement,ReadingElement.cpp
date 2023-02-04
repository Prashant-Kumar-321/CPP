// Array is a Collection of similar type of Data Stored in Contiguous memory Location
// Array Name represents Base Address(Address of first Element) of Array; 

#include<iostream>
#include<conio.h>
using namespace std; 

int main()
{
  // Declaring array 
  int arr[5]; 
  // Assignment of elements to an array; 
  arr[0] = 9;   // first element 
  arr[1] = 3;   // second element 
  arr[2] = -1;  // third element 
  arr[3] = 8;   // four element 
  arr[4] = 19;  // fifth element 
  
  // display element of array
  for(int i=0; i<5; i++)
      cout<< "arr["<<i<<"] = "<< arr[i]<< endl; 

  // Initalization of array
  float arr1[] = {2.5, 38,19,4,8,9,20,17}; // {, , , ,  }----> is known as Intializer list 
  int n = sizeof(arr1) / sizeof(arr1[0]); // finding the size of initialized array 

  cout<< "\nsize of Arr1 = "<< n<< endl; 

  // traversing the whole array and printing the value of array
  cout<< "Elements are : "<< endl; 
  for(int i=0; i<n; i++)
     cout<< arr1[i]<< " "; 
  
  // Addresses of elements of an array; 
  


  return  0; 
}