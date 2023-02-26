#include<iostream> 
using namespace std; 

class Addition 
{
  int x,y; 
public: 
  Addition(int x, int y=0): x(x), y(y){
  }
  Addition (){
  }
  ~Addition(){
  }

  // member function
  //************************************************
  // const member function  
  int add() const {
    return (x+y); 
  }
  void display() const { // const member function 
    cout<<x<<" "<<y<<endl; 
  }
  //************************************************

  // setter function 
  void setX(int x){
    this->x = x; 
  }
  void setY(int y){
    this->y = y;
  }
 
}; 


// Driver function 
int main(void)
{
  Addition A1(4,6); 
  int sum = A1.add(); 
  cout<<"Addition  = "<< sum <<endl; 
  A1.display();
  A1.setX(7); 
  A1.setY(9);  
  A1.display(); 

  // int const  x = 9; // x is read-only variable 
  // char const ch = 'a'; 
  //  x = 10;// Error  
  // cout<<x <<endl; 
  // cout<<ch<<endl; 

  Addition const A2(8,9); // Read only object 
  A2.display();
  cout<<"Addition (A2) = "<<A2.add()<<endl;  
  

  int static y = 78; // They get memory in static section 
  y = 12; 
  cout<<y<<endl; 

  Addition static A3(9,4); // Static object 
  A3.display(); 
  cout<<"Addition (A3) = "<<A3.add()<<endl; 


  return 0; 
}