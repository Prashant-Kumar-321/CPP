#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std; 

#define PI 3.141592

// Driver function 
int main()
{ 
  double x = sqrt(3); 
  double RadianAngle, DegreeAngle; 
  RadianAngle = atan(x); 
  DegreeAngle = atan(x) * 180/PI; 

  cout<<"arc tangent("<< x<< ") = "<< RadianAngle<< " in radian"<< endl; 
  cout<<"arc tangent("<< x<< ") = "<< DegreeAngle<< " in degree"<< endl;
  cout<<"\n\n\n"<<endl; 
  
  printf("Arc tangent(x)      Radian      degree\n"); 
  for(x=-50; x<=50; x++)
  {
    RadianAngle = atan(x); 
    DegreeAngle = atan(x) * 180/PI; 

    printf("Arc tangent(%g)      %0.5lf        %0.2lf\n\n",x, RadianAngle, DegreeAngle); 
  }



  return 0; 
}