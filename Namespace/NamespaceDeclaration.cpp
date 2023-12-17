#include<iostream>
#include<conio.h>

/*
  If i don't want to use entire namespace then We can also use specific members of 
  namespace And this declaratin will look like;

  using std::cout;
  using std::endl;
  using std::cin;
*/
using namespace std;

/* Priority
  Local Variable
  Global Variable
  Namespace Varaible

*/

// Making own namespace
namespace A
{
  int x = 50;// Namespace Variable

  void print()// Function Definition
  {
      int x = 56;
      cout<< x <<endl;
      cout<< x <<endl;
      cout<< x << endl;
  }
  void display(); // declaration of display() method inside namespace A
}
// defining display() function
void  A::display() // A:: scope resolution qualifirer
{
  cout<< "I write Mathematical Logic in code "<< endl;
}


using namespace A;

// Global Variable
int x = 55;



int main(void)
{
  // local variable
    int x = 65;

  cout<< "x = " << x    << "\n"; // local Variable
  cout<<"x = "  << ::x  << endl;// Global Variable; Explicitly telling to print globlal variable;
  cout<< "x = " << A::x << endl; // Namespace Variable;// Explicityly telling to print namespace variable;
  A::print();
  A::print();// Already used namespace A;
  display();
  getch();
  return 0;
}
