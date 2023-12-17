#include<iostream>
#include<conio.h>
#include<unistd.h>// implementing sleep function

using namespace std;

// Making\Creating own namespace

//NOTE:COMPILER Merges the two name space with same name in one;

namespace A //Declaring namespace variable;
{
  int x;
  int y;
}

namespace A //Writing the definition of function
{
  // Adding two number;
  int sum(int x, int y)
  {
    return x+y;
  }

  //checking even odd;
  bool isEven(int x)
  {
    if(x&1)
      return 0;
    else
      return 1;
  }

  // Fuction calling;
  //NOTE: We cann't leave a fun by just invoking
  //we must need to store its return type in some variable;

  int a = abs(-5);

}
using namespace A;// Using Directives


// Driver code;
int main(void)
{
  cout<<x <<endl;

  // Taking input from user ;
  cout<<"Calculator of Adding Two Numbers: \n";
  cout<<"Enter two Numbers : ";
  cin>> A::x >> A::y ;

  //Doing manipulation and printing;
  cout<< "Sum = " << A::sum(x,y)<<endl;

  cout<<"\n\n";
  // cheking Number is odd or Even;
  cout<< "Checking Number is Even or odd \n" ;
  cout<<"Enter a Number \n";
  cin>>x; // taking input;
  (isEven(x)) ? cout<<"Even" : cout<< "Odd" ; // using Ternary operator;

  getch();
  return 0;
}
