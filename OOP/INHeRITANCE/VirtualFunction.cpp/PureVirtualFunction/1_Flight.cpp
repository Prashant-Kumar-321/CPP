#include<iostream>
using namespace std; 

class Flight  // Abstract class 
{
public:
  Flight(){
    cout<<"Flight constructor called"<<endl; 
  }
  virtual ~Flight(){
    cout<<"Flight destructor called"<<endl; 
  } 

  // pure virtual function definition 
  virtual void Search() = 0; 
  virtual void Book() = 0; 

  virtual void display(){
    cout<<"Flight display called"; 
  }
}; 

class SpiceJet: public Flight
{
public: 
  SpiceJet(){
    cout<<"Spicejet constructor called "<<endl; 
  }
  ~SpiceJet(){
    cout<<"\nSpice jet destructor"<<endl; 
  }

  void Search(){
    cout<<"Spice jet Aeroplane is searched"<<endl; 
  }
  void Book(){
    cout<<"Spice jet Aeroplane ticket is booked "<<endl; 
  }

}; 

class Indigo
{
public: 
  Indigo(){
    cout<<"Indigo constructor is called"<<endl; 
  }

  void Search(){
    cout<<"Indigo Aeroplane is searched"<<endl; 
  }
  void Book(){
    cout<<"Indigo Aeroplane ticket is booked "<<endl; 
  }

}; 

// Driver code 
int main()
{
  Flight*ptr = NULL; 
  
  SpiceJet spj1; 
  ptr = &spj1; 
  ptr->Book(); 
  ptr->Search();  
  ptr->display(); 

  return 0; 
}