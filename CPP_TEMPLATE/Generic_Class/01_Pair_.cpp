#include<iostream>
using namespace std; 

template<class _T1, class _T2> 
class Pair
{
public:
  _T1 first; 
  _T2 second; 

  explicit Pair(_T1 first, _T2 second) : first(first), second(second){}
  Pair(){}
  ~Pair(){}

  void print(){
    std::cout<< first<< " , "<< second<< std::endl;             
  }

};  

// Driver function 
int main(int argc, char**agrv)
{
  Pair<int,int> intPair(23, 18); 
  Pair<int, std::string> intStrPair(19, "Prashant"); 

  cout<< "First Value = "<< intPair.first<< " Second Value = "<< intPair.second<< endl; 
  intStrPair.print(); 

  return 0; 
}