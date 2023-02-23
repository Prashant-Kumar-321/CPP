#include<iostream>
#include<utility>
#include<string>
using namespace std; 

int main()
{
  pair<int,string> pair1{45,"Neha"}; 
  int a; 
  string b; 


  // tie(a,b) = pair1; Error - undefined 

  return 0; 
}