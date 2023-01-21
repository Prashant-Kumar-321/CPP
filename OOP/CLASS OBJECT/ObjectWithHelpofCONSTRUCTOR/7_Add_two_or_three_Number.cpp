#include<iostream>
#include<conio.h>
using namespace std;

float Add(float a,float b, float c = 0)
{
  return (a+b+c);
}

int main()
{
  cout<< "Addition of two Number = "<< Add(2,6) << endl;
  cout<< "Addition of three Number = "<< Add(-100,50, 20)<< endl;
  return 0;
}
