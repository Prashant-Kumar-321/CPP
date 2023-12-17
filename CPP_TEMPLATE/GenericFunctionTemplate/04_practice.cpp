#include<iostream>
using namespace std; 
/*Generic Template function */
template<typename Type> void display(Type a){
  cout<< "You got a = "<< a<< std::endl; 
}
 
//overloading Generic function for string version  with normal function [Explicitly]
template<> void display<string>(string a){
  cout<< "String Normal function is called : \n"; 
  for(auto i: a){
    cout<< i<< " "; 
  } 
  cout<< "\n"; 
}

template<typename t1, typename t2> void print(t1 a, t2 b);
template<typename T> void print(T a); 


int main(void)
{
  // display(34); 
  // display(3.45f); 
  // display(3.9877); 
  // display<string>("Generic Template Function"); // We can explicityly mention the dataType for which we are calling  
  // // display(str); 
  // display('A'); 

  print<int, std::string>(12, std::string("Yeaers old")); // Explicityly telling 
  //compiler to overload print method for int and string data_type 
  print(3.75484F); 

  return 0; 
}


//overloading Template function With Another another Template function
template<typename t1, typename t2>
void print(t1 a, t2 b){
  std::cout<< "2P GF called "<<std::endl; 
  std::cout<< "a = "<< a<< " and b = "<< b<< std::endl; 
}

template<typename T> 
void print(T a){
  std::cout<< "1P GF called "<<std::endl; 
  std::cout<< "a = "<< a<< std::endl; 
}