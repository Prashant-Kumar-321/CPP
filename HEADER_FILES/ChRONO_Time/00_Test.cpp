#include<iostream>
using namespace std; 

namespace ABC{

class XYX
{
public:   
  int x;
  int y;  
}; 
}
//Type aliasing allows you to create a new name for a typ
//syntax
// using <aliase Name> = existing type; 
//using alias_name = existing_type;

using Int = int; 
using abc = ABC::XYX; 

int main(void)
{
  abc c; 

  return 0; 
}