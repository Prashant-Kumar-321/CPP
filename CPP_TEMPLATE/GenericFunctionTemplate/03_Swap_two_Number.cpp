#include<iostream>
using namespace std; 

template<class T> void swaP(T &a, T &b){
  T temp = a; 
  a = b; 
  b = temp; 
}

template<typename T1, typename T2>
T1 sum( T1 a, T2 b){
  return (a+b);  
}

//Overloading Generic Function template 
// Template function prototype 
template <typename _Type> void whatYouGot(_Type a);  
template <typename _Type1, typename _Type2> void whatYouGot(_Type1 a, _Type2 b); 

//overloading the whatYouGot(_Type) for int (explicityly)
template<> void whatYouGot<int>(int a); 

// Driver function 
int main(void)
{
  // char a = 'P', b = 'Q'; 
  // cout<< "Before Swap "<< endl; 
  // cout<< "a = "<< a<< " and b = "<< b<< endl; 
  // swaP(a,b);   
  // cout<< "After Swap "<< endl; 
  // cout<< "a = "<< a<< " and b = "<< b<< endl; 

  // cout<< sum(3, 4) << endl; 
  // cout<< sum(3.55F, 2)<< endl;
  // cout<< sum('a', 3)<< endl;   

  whatYouGot("Prashant learning QT"); 
  whatYouGot("Prashant learing", " QT"); 

  // cin.get(); 
  return 0; 
}


template <typename _Type> void whatYouGot(_Type a){
  cout<< "From one parameter Generic  function "<< endl; 
  cout<< "You Got a = "<< a<< endl; 
}

template <typename _Type1, typename _Type2> void whatYouGot(_Type1 a, _Type2 b){
  cout<< "From two parameter Generic function"<< endl; 
  cout<< "You Got a = "<< a << " and b = "<< b<< endl; 
}

//overloaded function of whatYouGot template function for  int version [:Explicitly:]
template<> void whatYouGot<int>(int a){
  cout<< "From Normal Function "<< endl; 
  cout<< "You Got a = "<< a<< endl; 
}
