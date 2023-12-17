#include<iostream>
using namespace std; 

class ABC
{
  int x; 
  public: 
    ABC(int a) // Parametrized constructor; 
    {
      cout<< "ABC 1 PC called "<< endl; 
      x = a; 
    }
    ABC(int a, int b)
    {
      cout<< "ABC 2 PC called "<< endl; 
      x = b; 

    }
    ABC() 
    {
      cout<< "Default constructor called "<< endl; 
    }
   
    int getX() // getter of x variable; 
    {
      return x; 
    }
}; 

// Second class having an member object of ABC class  
class XYZ 
{
  int x,y;
  const int cp;  
  int& z; 
  ABC a1;
   
  /***********************************************************************
  default construction or one parameter constructor will be called only 
  if and only if 
  a1 is not being initialized in the intializer list 
  ************************************************************************/  

  public:
    // DConstructor
    XYZ():cp(0),z(x) // intialization instance reference variable and const instance  variable
    {
    } 
    XYZ(int x, int y): x(x),y(y),z(x),cp(x),a1(x,y)
    {
      
    }
    /************************************************************************
 
    if we intialize member object inside constructor body;
    and don'nt initialize at the time of member object declaration 
    ABC a1 ---> dc called ; { a1 = 8 ---> pc called } 
    pc --> parametrized constructor
    dc --> default constructor;

    Constructor body code get executed after execution of intializer list 
    and declaration of instances variable of object 

    Initializer list executed along with the declaration of instance member 
    variable of object 
    and object are intialized 
    ***********************************************************************/ 
    /**********************************************************************
     
    if member object is intialized in intializer list than 
    ABC a1, ABC a1 = 8 is ignorned  
    We can intialized our member object by calling parameter constructor taking 
    any number of parameter in initializer list 

    **************************************************************************/ 
    void display()
    {
      cout<< "x = "<<x<< " , y = "<< y<< endl; 
      cout<< "a1.x = "<< a1.getX()<<endl; 
      cout<< "constant p = "<< cp<< " , z = "<< z<< endl; 
    }
};

// Driver code 
int main()
{ 
  XYZ a(9,10);
  a.display(); 

  XYZ b; 
  b.display(); 

  cin.get(); 
  cin.get(); 
  return 0; 
}