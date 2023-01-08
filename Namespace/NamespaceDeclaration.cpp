#include<iostream>
#include<conio.h>

//using std::cout;
//using std::endl;
//using std::cin;
using namespace std;

/* Priority

  Local Variable
  Global Variable
  Namespace Varaible

*/

// Making own namespace
namespace

{
  int x = 50;// Namespace Variable

  void print()// Function Definition
  {
      int x = 56;
      cout<< x <<endl;
      cout<< x <<endl;
      cout<< x << endl;
  }

}
using namespace A;

// Global Variable
int x = 55;



int main(void)
{
  // local variable
    int x = 65;

  cout<< "x = " << x    << "\n"; // local Variable
  cout<<"x = "  << ::x  << endl;// Global Variable; Implicitly telling to print globlal variable;
  cout<< "x = " << A::x << endl; // Namespace Variable;// Implicitly telling to print namespace variable;
  A::print();
  print();// Already used namespace A;

  getch();
  return 0;
}
