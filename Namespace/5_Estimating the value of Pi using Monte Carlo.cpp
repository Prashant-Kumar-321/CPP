#include<bits/stdc++.h>
using namespace std; 

// the Number of random points for the estimation of PI 
// More the random points more the precise value of PI
#define INTERVAL 1000


void estimate_PI()
{
  double x,y; // point (x,y)
  double circ_InsPoint = 0 , circ_OutsPoint = 0; // No of points present inside and outside the circle 

  float dis; // distance of point from origin 
  long double PI; 

  for(int i=0 ; i<(INTERVAL); i++)
  {
    x = double(rand()%(INTERVAL+1)) / INTERVAL ; 
    y = double(rand()%(INTERVAL+1)) / INTERVAL ; 

    dis = x*x + y*y; // distance of point from origin ; 

    // checking point position 
    if(dis<=1)     // point on the or inside the circle 
      circ_InsPoint++; 
    else            // point is out side the circle 
      circ_OutsPoint++; 
    
    PI = 4*( circ_InsPoint/(circ_InsPoint+circ_OutsPoint)); 

    cout<<x <<"   "<<y <<"   "<<circ_InsPoint << "   "<< circ_OutsPoint + circ_InsPoint<< "   "<< PI <<endl;
    
    if(i==20)
      getchar(); 
  }
}

// deiver code 
int main()
{ 
  
  estimate_PI(); 

  return 0; 
}
