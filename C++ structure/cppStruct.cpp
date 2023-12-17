#include<iostream>
using namespace std; 

struct Point
{
    int x; 
    int y; 
  private: 
    static int faa; 
  public: 
    int& getStaticData(){return faa;}
};
int Point::faa = 0;  //Very Important to intialize the static data member of struct and class 
// otherwise undefined refernce error will be thrown by compiler, at compile time

//Driver function 
int main()
{
  Point p1 = {10, 20}, p2={5, 15};
  cout<< p1.x<< " " << p1.y<< endl;
  p1.getStaticData() = 10; 
  p2.getStaticData() = 20; 
  cout<< p1.getStaticData()<< endl; 
  cout<< p2.x<< " " << p2.y<< endl;   

  return 0; 
}


/*
 cpp                                               c 
 ------------------------------------------------|---------------------------------------------------|
1. | object's Member can't be initialized        |1. object's members can init designately           |
   | designatly                                  |   for instance                                    |
   | for example:                                |      struct Point p1 = {.x = 10, .y = 20}; //fine |
   |    Point p1 = {.x = 10, .y = 40}; //Error   |                                                   |
   |    Point p = {10, 20};                      |                                                   |
---|-------------------------------------------------------------------------------------------------|
2. cpp struct object's {member variable} can only be
   intialized sequencially Without constructor. 
*/