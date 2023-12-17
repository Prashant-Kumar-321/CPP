// implementation file

#include"my_computation.hpp"

// converting Faherenheit Temp into ceclcius Temp;
float faherenheit_to_Celcius(float F){
  return (F - 32) * 5 / 9.0;
}

int doubleNum(int a){
  return (2 * a);
}

float point_Distance(Point P, Point Q){
  return (float)sqrt(pow(P.x - Q.x, 2) + pow(P.y - Q.y, 2) + pow(P.z - Q.z, 2));
}


float Area_Rectangle(float l, float b){
  return (l*b); 
}
