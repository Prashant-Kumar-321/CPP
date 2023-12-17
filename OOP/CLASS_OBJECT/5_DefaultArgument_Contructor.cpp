#include<iostream>
#include<iomanip>

using namespace std;

class Addition
{
public:
  int x,y;

  int add()
  {
    return (x+y);
  }
  // Default Argument Constructor
  Addition (int a, int b = 9) // 1 parameter and 2 parameter
  {
    x = a;
    y = b;
  }
  Addition() {}
};

int main()
{
  cout<<setw(80)<< "Default Argument constructor \n"<< endl;

  Addition a;
  cout<<setw(50)<<left<< "Default constructor --> ";
  cout<<a.x<< ","<< a.y<< endl ;

  //  Addition b(4);
  //  Addition b = 4;// only one parameter constr uctor
    Addition b = (30,50);// only one parameter constructor
  //  Addition b =  30,40;//  error

  cout<<setw(50)<<left<< "One Parameter constructor --> ";
  cout<<b.x<< ","<< b.y<< endl ;

  Addition c(56,9);
  cout<<setw(50)<<left<< "Two Parameter constructor --> ";
  cout<<c.x<< ","<<c.y<< endl ;




  return 0;
}
