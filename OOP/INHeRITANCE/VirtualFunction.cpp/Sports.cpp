#include<iostream>
using namespace std; 

class ABC
{
public: 
  friend int getPlayerCount(); 
}; 

class Sport
{
public: 
  virtual ~Sport(){
    cout<< "Destructor of Sport "<< endl; 
  }

  virtual int getPlayerCount (){
    return 1889; 
  } 
  // int virtual getPlayerCount () const; 

};

class Cricket : public Sport
{
public: 
    ~Cricket(){
      cout<< "Destructor of Cricket"<< endl; 
    }
    int getPlayerCount (){
      return 11; 
    } 

}; 

int main ()
{
  // Cricket cricket;
  Sport* sport = new Cricket; 
  cout<< sport->getPlayerCount()<< endl;
  delete sport;   

  return 0; 
}

/**
 * Important links of ChatGpta
 * https://chat.openai.com/share/d17a3a03-4736-4b07-a62d-d8e1a1169674
*/

//Note:-
/*
 * Virtual Destructor of Parent class 
 * will ensure the proper clean up of the memory 
 * 
 * Virtual Function binded at the Run-Time 
 * 
 * Non-Virtual Function binded at the Compile-Time 
*/