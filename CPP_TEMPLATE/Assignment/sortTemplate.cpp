#include<iostream>
using namespace std; 

/* <Question>
    Define a template function to sort array of any type 
   </Question>
 */

template<typename arrType> void printArray(arrType arr[], int n)
{
  for(int i=0; i<n; ++i){
    cout<< arr[i]<< ", "; 
  }
  cout<< endl; 
}

// Partition function 
template<typename arrType> 
int partition (arrType arr[], int start, int end)
{ 
  // Dry run visualization
  //                i
  //                    p
  // 12, 8, 15, 18, 20, 21, 34 , 32
  //                                  j 

  // first element as my pivote element 
  int i = start; 
  int pivote = start; 

  for(int j=start; j<=end; ++j)
  {
    if(arr[j] < arr[pivote])
    {
      if(i != j){
        swap(arr[i], arr[j]); 
      }
      if(i == pivote){
        pivote = j; 
      }
      ++i; 
    }
  }
 
  swap(arr[i], arr[pivote]); 
  return i; 
}

// Main working function 
template<typename arrType> 
void quickSort (arrType arr[], int start, int end)
{
  if (start >= end){
    return; 
  }
  else 
  {
    int pivote = partition(arr, start, end); 
    quickSort(arr, start, pivote-1); 
    quickSort(arr, pivote+1, end); 
  }
}

template<class arrType>
void sortArray (arrType arr[], int n)
{
  quickSort(arr, 0, n-1); 
}

/* <Neccessary-Operation>
      operator< should be overloaded in class of object 
   </Neccessary-Operation>
*/


// Driver function 
int main ()
{
  // int arr[] = {2, 98, 43, 19, 31, 36, 42, 70, 50, 100}; 
  // float arr[] = {2.09f, 98.0032f, 43.215f, 19.09f, 19.10f, 2.1f, 3.1f, 36.82f, 4.2f, 70.654f, 5.9f, 10.32f}; 
  std::string arr[] = {
    "cout", "template", "return", 
    "overloading", "class", "typename", 
    "prashant", "nishi", "ravi", "suman"
  }; 

  int n = sizeof(arr)/sizeof(arr[0]); 
  
  sortArray(arr, n); 
  printArray(arr, n); 

  return 0; 
}

/**
 * From main 
 *  sortArray(string*, int)
 * 
 * // During compile time  
 * // compiler overloaded my generic functions for string* 
 * 
 * void sortArray(string* arr, int n); 
 * 
 * void quickSort(string* arr, int, int);
 * 
 * int partition(string* arr, int, int); 
 */







