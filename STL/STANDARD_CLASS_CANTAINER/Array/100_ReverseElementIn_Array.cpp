#include<iostream>
#include<array>
using namespace std; 

// function prototype 
void reverse_Array(array<float,5>*);
void display_array(array<float,5> );
void Swap(float *, float*);   

// program to reverse array 
// Driver function 
int main(void)
{
  array<float, 5> num{9,7,-2,4,2};

  cout<< "Array before reverse "<< endl; 
  display_array(num); 

  reverse_Array(&num); // function call to reverse element of array 

  cout<< "Array after reverse "<< endl; 
  display_array(num);  // displaying array 

  float a = 8.9,b = 10.6;
  swap(a,b);  
  cout<<a<< " "<<b<<endl; 


  return 0; 
}

void reverse_Array(array<float,5> *num){

array<float,5>::iterator i = num->begin(); // return iterator of first elemetn 
array<float,5>::iterator j = num->end(); // return iterator of last elemetn 
// advance(j,-1); // adjusting j iterator to last element 
j--; 
cout<< *j<<endl; 

for(; i < j; ++i, j--)
{
  swap(*i,*j); // need to call by reference 
  // Swap(i,j); 
}
  // swap<float*>(i,j); 

}
void display_array(array<float,5> num){

  array<float,5>:: iterator itr = num.begin(); 

  for(itr; itr != num.end(); itr++)
    cout<< *itr<< " "; 
  
  cout<<endl; 

}

// swap two float type value 
void Swap(float *a, float*b)
{
  float temp = *a; 
  *a = *b; 
  *b = temp; 
}



