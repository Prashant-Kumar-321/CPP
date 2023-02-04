#include<iostream>
#include<cstring>
using namespace std;
void show()
{
  static int x = 10; // local static variable
  // x life span will be throughout the program till end of main()
  // life-span ---> within show function
  // it will be allocated memory once
  int y = 20; // life span till show is alive
  /*******************************************************************
   local static variable only geteeclared and initialized once on first function call 
   Normal Local Variable get declared and Initailized Every time function is called 
   ******************************************************************/
 
  cout<<"Address of y = "<< &y<< endl; 

  cout<< "x = "<< x<< " , y = "<< y<< endl;

  x++;
  y++;

  if(x%2)
     show(); 
}

// making another tem method
// void g()
// {
//   show(); 
// }

int main()
{
  show();
  // int x = 10; 
  // cout<< x<< endl; 
  // cout<< "len = "<< strlen("KUmar")<< endl;  
  show();
  show();
  show(); 

  // for(int i=0; i<3; i++)
  //       g(); 

  return 0;
}
