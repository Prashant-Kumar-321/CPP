#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std; 

#define PI 3.141592

// Driver code 
int main()
{ 
  double x, RadianAngle, DegreeAngle; 
  x = 0; 
  RadianAngle = acos(x);
  DegreeAngle = acos(x) * 180 / PI; 

  cout<<"acos("<<x<<") = "<<RadianAngle<<" in radian"<<endl; 
  cout<<"acos("<<x<<") = "<<DegreeAngle<<" in Degree"<<endl;

  // x out the range 
  x = 1.5; 
  cout<<"acos("<<x<<") = "<<acos(x)<< "\n\n"<<endl;  
  
  for(double x = -1; x<=1; x += 0.1)
  {
    cout<<"arc cosine("<<x<<") --> "; 
    cout<< acos(float(x))<<setw(3)<<left<< "  "<< int(acos(x)*180/PI)<<endl; 
  }


  return 0; 
}