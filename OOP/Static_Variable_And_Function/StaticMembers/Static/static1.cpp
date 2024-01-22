#include "static.hpp"

int MyClass::count = 0; 

void MyClass::static1(){
  for(int i=0; i<5; ++i){
    count++; 
  }
}

int MyClass::getCount(){
  return count; 
}
