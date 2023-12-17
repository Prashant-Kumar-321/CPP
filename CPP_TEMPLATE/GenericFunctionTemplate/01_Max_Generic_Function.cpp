#include<iostream>
#include<cstring>
using namespace std; 

//Generic Function Template Prototype
template <typename T> T Max(T a, T b); 
template <typename T> T Min(T a, T b); 

// prototype of specialized template function function
template<> const char* Min <const char*> (const char*a, const char*b);  
template<> const char* Max <const char*> (const char*str1, const char*str2); 


//Driver main Function 
int main()
{
  // cout<< Max(10, 3)<< endl; 
  // cout<< Max(3.87, 3.876)<< endl; 
  // cout<< Max('a', 'b')<< endl; 

  cout<< "Minimum Values "<< std::endl; 
  cout<< Min(3,2)<< endl; 
  cout<< Min(2.98f, 1.98f)<< endl; 
  cout<< Min("All", "Ball")<< endl; 

  return 0; 
}

//Generic function template to find the "max and min" of two same type value 
template <typename T> T Max (T a, T b){
  T max; 
  if(a>b) max = a; 
  else max = b; 

  return max; 
}

template <typename T> T Min(T a, T b){
  return (a>b)? b: a; 
}

// Overloading the Generic function for (const char*) version
template<> const char* Min <const char*> (const char*a, const char* b){
  cout<< "Overloaded function is invoked"<< endl; 
  return strcmp(a,b)> 0 ? b: a; 
}

template<> const char* Max <const char*> (const char*a, const char* b){
  cout<< "Overloaded function is invoked"<< endl; 
  return strcmp(a,b)> 0 ? a: b; 
}