#include<iostream>
using namespace std; 

template<class T1, class T2, int Size> 
class PrashantsClass
{
public: 
  PrashantsClass(const T1& a, const T2& b);
  int getSize()const{
    return size; 
  } 

  void display(); 

private: 
  int size; 
  T1 field1; 
  T2 field2; 
}; 

template<class T1, class T2, int Size> 
PrashantsClass<T1, T2, Size>::PrashantsClass(const T1& a, const T2& b){
  size = Size; 
  field1 = a; 
  field2 = b; 
}

template<class T1, class T2, int Size>
void PrashantsClass<T1, T2, Size>::display(){

  cout<< "Field 1 = "<< field1<< endl; 
  cout<< "Field 2 = "<< field2<< endl; 
  cout<< "Size = "<< size<< endl; 

}


int main(int argc, char** argv){ 

  const int n = 90; 
  PrashantsClass<int,int, 0> prashantObj(30,90); 
  cout<< "Size = "<< prashantObj.getSize()<< endl; 
  prashantObj.display(); 

  return 0; 
}