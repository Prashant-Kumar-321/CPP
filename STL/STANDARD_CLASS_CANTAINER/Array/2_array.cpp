#include<iostream>
#include<array>
using namespace std; 

void print(array<int,5> arr)
{
  // Iterating through container using iterator
  /* {
    array<int,5>::iterator a = arr.begin(); // iterator

    for(a = arr.begin(); a!=arr.end(); ++a)
      cout<< *a<< " ";
   }*/
   
   // Iterating through container using enhance "for loop" 
   for(int i: arr) // Enhanced For loop  
   {
    cout<< i<< " "; 
   }

  cout<<endl; 
}

int main()
{
  array<float,3> num;  // array is a standard container to store fixed size of sequence element

  cout<< "Enter 3 number : \n";  // taking input from user 
  for(int i=0; i<num.size(); i++)
    cin>>num[i]; 
  
  // displaying the elements of num array
  for(int i=0; i<num.max_size(); i++)
   cout<< num.at(i)<< " "; 

  // swapping the element of two array
  array<int,5> arr1 = {2,5,9,-1,3}; 
  array<int,5> arr2 = {9,2,10,37};

  cout<< get<2>(arr1)<< endl; // accessing the 2nd index element of arr1

  arr1.front() = 56; // arr1[0] = 56;  
  arr1.back()  = 30; // arr[4] = 30; 

  cout<<arr1.front()<< endl;
  cout<<arr1.back()<<endl; 

  arr1.swap(arr2); 
  print(arr1); 
  print(arr2); 

  return 0; 
}