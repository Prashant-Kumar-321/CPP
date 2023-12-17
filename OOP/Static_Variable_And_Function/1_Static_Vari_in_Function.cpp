#include<iostream>
#include<cstring>
using namespace std;

void show()
{
  static int X = 10; // local static variable

  // X life span will be throughout the program till the end of main() function 
  // Acess Scope ---> within show() function
  // it will be allocated memory once

  int y = 20; // life span till show() function() is alive
  /*
   local static variable only get declared and initialized once on first function call 
   Normal Local Variable get declared and Initailized Every time function is called 
   */
 
  cout<<"Address of y = "<< &y<< endl; 

  cout<< "X = "<< X<< " , y = "<< y<< endl;

  X++;
  y++;

  // if(X%2) //Whenever X is odd recursive call will take place
  //    show(); 
}

int main()
{
  show();
  show();
  show();
  show(); 

  return 0;
}
