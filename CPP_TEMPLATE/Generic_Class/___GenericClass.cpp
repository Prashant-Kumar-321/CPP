#include<iostream>
using namespace std; 

template<class Type>
class GenericClass
{
public: 
  void setAttribute(const Type& val){
    attribute = val; 
  }
  Type getAttribute()const;  

  void display()const{
    cout<< "Generic function"<< endl; 
    cout<< "Attribute = "<< attribute<< endl; 
  }

private: 
  Type attribute; 
} ; 

template<typename Type>
Type GenericClass<Type>::getAttribute()const{
  return attribute; 
}

// Specialize the member 'display' of GenericClass for string type 
template<>
void GenericClass<std::string>::display() const {

  cout<< "This is String function of generic class "<< endl; 
  cout<< "Attribute = "<< attribute<< endl; 
}



// Driver function 
int main(int argc, char* argv[]){

  GenericClass<string> intObj; 
  intObj.setAttribute("89"); 
  intObj.display(); 

  return 0; 
}