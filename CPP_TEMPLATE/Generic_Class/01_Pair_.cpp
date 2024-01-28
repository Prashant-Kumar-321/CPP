#include<iostream>
using namespace std; 

template<class T1, class T2> 
class Pair
{
public:
  T1 first; 
  T2 second; 

  explicit Pair(const T1& first, const T2& second) : first(first), second(second){}
  void print()const; 
};  

template<typename T1, typename T2>
void Pair<T1, T2>::print()const{
  cout<< "First = "<< first<< endl; 
  cout<< "Second = "<< second<< endl; 
}


// Driver function 
int main(int argc, char**agrv)
{
  Pair<int,int> intPair(23, 18); 
  Pair<int, std::string> pairIntStr(19, "Prashant"); 

  cout<< "First Value = "<< intPair.first<< " Second Value = "<< intPair.second<< endl; 
  pairIntStr.print(); 

  return 0; 
}

