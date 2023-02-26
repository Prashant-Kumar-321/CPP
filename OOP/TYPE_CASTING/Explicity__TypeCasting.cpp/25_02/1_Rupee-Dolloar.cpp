#include<iostream>
#include<bits/stdc++.h>
using namespace std; 

class Dollar{

private: 
  int dolar; 
public: 
  Dollar(int a): dolar(a){
  }
  Dollar(){
  }

  int getDolar()
  {
    return dolar; 
  }
  void display(){

    cout<<"Dollar = "<<dolar<<endl; 
  }

}; 

class Rupee{

private: 
  int rupee; 
public: 
  Rupee(int a): rupee(a){
  }
  Rupee(){
  }

  void display(){
    cout<<"Rupee = "<<rupee<<endl; 

  }
  int getRupee(){
    return rupee; 
  }

  // return type is Dollar object 
  operator Dollar() // Rupee --> Dollar 
  {
    return rupee; 
  }

  Rupee(Dollar a) // Dollar --> Rupee 
  {
    rupee = a.getDolar(); 
  }
}; 




// Driver funtion 
int main(void)
{
  Dollar D1 = 49; 
  Rupee R1 = D1; 

  R1 = 100; 
  D1.display(); 
  D1 = R1; 
  R1.display(); 

  return 0; 
}