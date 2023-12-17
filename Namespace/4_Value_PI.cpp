#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;

int main()
{
//  long double PI = 0;
//  long double dx = 0.01;
//
//  //Iterating loop to calcualte integration
//  for(double x = -0.999; x < 1;  x += 0.01){ // since fun is not defined ate x = -1 and 1
//    PI += (1/sqrt(1-x*x)) * dx;
//  }
//
//  cout<< "PI = "<< PI<<endl;


  double PI = 2*acos(0.0); // cos-1(0.0) = PI/2 ;

  printf("%*.*lf \n",15,5,PI); 
  return 0;
}








