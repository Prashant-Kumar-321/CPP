#include<bits/stdc++.h>
using namespace std; 

int main()
{ 
  int a; 
  char b; 
  float c; 
  double d; 

  int*p = &a; 
  char*q = &b; 
  float*r = &c; 
  double*s = &d; 

  *p = 10; 
  *q = 'A'; 
  *r = 20.76; 
  *s = 20.778947; 

  // cout<< a<<endl; 
  // cout<< b<<endl; 
  // cout<< c<<endl; 
  // cout<< d<<endl; 

 //-----------------------------++++++++++++++++++++++***************************
  float*ptr = new float[4]; 
  float**qtr = &ptr; 

  ptr[0] = 2.3, ptr[1] = 7; 
  ptr[2] = 9.73, ptr[3] = 3.05;

  // changing the direction of ptr with the help of qtr; 
  // for(int i=0; i<=3; i++,qtr[0]++)
  //   cout<< ptr[0]<< "     "<< ptr<< endl;  

  // Accessing element of array using qtr
  for(int i=0; i<=3; i++)
  {
    // cout<< *(*qtr+i)<< endl; 
    // cout<< *(qtr[0] + i)<< endl; 
    cout<< qtr[0][i]<< endl; 
  }

  return 0; 
}