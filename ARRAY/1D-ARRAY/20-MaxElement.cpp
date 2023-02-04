#include<iostream>
using namespace std; 

class MaxElement
{
  int arr[5]{0}; // Initialize the array with zero
  int Max, Sum{0}; 

  public: 
    MaxElement(int*a)
    { 
      for (int i=0; i<5; i++) 
           arr[i] = a[i];
    }
   MaxElement() {}

   MaxElement max()
   {
     Max = arr[0]; 
     for(int i=1; i<5; i++)
         if(Max<arr[i])
            Max = arr[i]; 
    
    return *this; 
    // return Max; 
   }
   // sum of all Elements of the array; 
   MaxElement sum()
   {
    int i; 
    for(i=0; i<5; i++)
        Sum += arr[i]; 

    return *this; 
   }


  // getter function of Max 
  int getMax()
  {
    return Max; 
  }
  int getSum()
  {
    return Sum; 
  }


  // Finding maxElement from arrray recursively 
  // Member function finding max Element from array 
  // starting from index = idx
  int max (int arr[], int idx, int n) 
  {
    if(idx == n-1) // Base condition  
       return arr[idx]; 

    return (arr[idx]>max(arr,idx+1,n)?arr[idx]: max(arr,idx+1, n));  
    // self work is comparing element of idx index of arr with the max of elements start with (idx + 1)
    // assuming max(arr, idx+1,n) will return max Element of array startng form idx+1 index; 
  }
}; 

// Driver function
int main(void)
{
   // MaxElement Rank({9,1,3,6,10}); // Error::- Cann't convert <enclosed - initializer list> into int*a

    int a[] = {9,3,0,-2,10}; 
    MaxElement Marks(a); // Initalizing Marks object with 5 Elements passing an array to Constructor 
    cout<< "Maximum Marks = "<< Marks.max().getMax()<< endl;

    // function call finding max recursively 
    int max = Marks.max(a,0,5); 
    cout<< "Recursive max = "<< max<< endl;

    cout<< "Sum of all Elemnts of arr = "<< Marks.sum().getSum()<< endl;  

    cout<< "Enter 5 Numbers : "<< endl; 
    for(int i=0; i<5; i++)
      cin>> a[i]; 
    
    MaxElement Num(a); 
    cout<< "Max Number = "<< Num.max().getMax()<< endl; 
    
    cin.get();
    cin.get();  
    return 0; 
}
