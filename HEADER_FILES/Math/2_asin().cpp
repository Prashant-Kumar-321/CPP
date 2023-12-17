#include<iostream>
#include<conio.h>
#include<cmath>
#include<iomanip>
using namespace std; 

#define PI 3.141592

// Driver function  
int main()
{ 
  double x, RadianAngle, DegreeAngle; 
  x = 1/sqrt(2); 
  RadianAngle = asin(x);
  DegreeAngle = asin(x) * 180 / PI;  
  // cout<<"Arc sine("<<x<< ") = "<< RadianAngle<< " in Radina"<< endl;
  // cout<<"Arc sine("<<x<< ") = "<< DegreeAngle<< " in Degree"<<endl;
  printf("Arc sine(%g) = %.2lf \n",x,RadianAngle); 
  printf("Arc sine(%g) = %g \n",x,DegreeAngle);
 
  for(x = -1.00; x<=1.00; x += 0.01)
  {
    RadianAngle = asin(x);
    DegreeAngle = asin(x) * 180 / PI; 
    printf("arc sine(%0.2lf) ----> %0.2lf    %0.2lf\n\n", x, RadianAngle,DegreeAngle); 
  }
  RadianAngle = asin(1);
  DegreeAngle = asin(1) * 180 / PI; 
  printf("arc sine(%0.2lf) ----> %0.2lf    %0.2lf\n\n", x, RadianAngle,DegreeAngle); 


  getch(); 
  return 0; 
}